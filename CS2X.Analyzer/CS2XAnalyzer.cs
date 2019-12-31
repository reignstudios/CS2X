using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Linq;
using System.Threading;
using CS2X.Analyzer.SyntaxValidation;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using Microsoft.CodeAnalysis.Diagnostics;

namespace CS2X.Analyzer
{
	[DiagnosticAnalyzer(LanguageNames.CSharp)]
	#pragma warning disable RS1022
	public class CS2XAnalyzer : DiagnosticAnalyzer
	#pragma warning restore RS1022
	{
		public const string DiagnosticId = "CS2XAnalyzer";
		private static DiagnosticDescriptor ErrorRule = new DiagnosticDescriptor(DiagnosticId, "CS2X", "{0}", "Naming", DiagnosticSeverity.Error, isEnabledByDefault: true, description: string.Empty);
		private static DiagnosticDescriptor WarningRule = new DiagnosticDescriptor(DiagnosticId, "CS2X", "{0}", "Naming", DiagnosticSeverity.Warning, isEnabledByDefault: true, description: string.Empty);
		public override ImmutableArray<DiagnosticDescriptor> SupportedDiagnostics => ImmutableArray.Create(ErrorRule, WarningRule);

		public override void Initialize(AnalysisContext context)
		{
			context.ConfigureGeneratedCodeAnalysis(GeneratedCodeAnalysisFlags.Analyze | GeneratedCodeAnalysisFlags.ReportDiagnostics);

			// See https://github.com/dotnet/roslyn/blob/master/docs/analyzers/Analyzer%20Actions%20Semantics.md for more information
			context.EnableConcurrentExecution();
			context.RegisterSemanticModelAction(AnalyzeSyntax);
		}

		private void AnalyzeSyntax(SemanticModelAnalysisContext context)
		{
			var compilation = (CSharpCompilation)context.SemanticModel.Compilation;
			var options = new ProjectAnalyzer.Options()
			{
				breakOnError = false,
				writeSyntaxSuffix = false,
				scanChilderen = false
			};
			var analyzer = new ProjectAnalyzer(compilation, options);
			analyzer.SyntaxErrorCallback += Analyzer_SyntaxErrorCallback;

			void Analyzer_SyntaxErrorCallback(SyntaxError error)
			{
				var location = error.node.GetLocation();
				if (!location.IsInSource || Location.None.Equals(location)) return;
				var diagnostic = Diagnostic.Create(ErrorRule, location, error.message);
				context.ReportDiagnostic(diagnostic);
			}

			try
			{
				analyzer.Analyze(context.SemanticModel.SyntaxTree);
			}
			catch (Exception e)
			{
				var diagnostic = Diagnostic.Create(WarningRule, Location.None, "CS2X: Analyzer error: " + e.Message);
				context.ReportDiagnostic(diagnostic);
			}
		}
	}
}
