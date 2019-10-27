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
	public class CS2XAnalyzer : DiagnosticAnalyzer
	{
		public const string DiagnosticId = "CS2XAnalyzer";
		private static DiagnosticDescriptor Rule = new DiagnosticDescriptor(DiagnosticId, "CS2X", "{0}", "Naming", DiagnosticSeverity.Error, isEnabledByDefault: true, description: string.Empty);
		public override ImmutableArray<DiagnosticDescriptor> SupportedDiagnostics { get { return ImmutableArray.Create(Rule); } }

		public override void Initialize(AnalysisContext context)
		{
			// See https://github.com/dotnet/roslyn/blob/master/docs/analyzers/Analyzer%20Actions%20Semantics.md for more information
			
			// enable faster processing
			context.EnableConcurrentExecution();

			// analyze all syntax kinds
			var enumValues = Enum.GetValues(typeof(SyntaxKind));
			foreach (SyntaxKind value in enumValues)
			{
				context.RegisterSyntaxNodeAction<SyntaxKind>(AnalyzeSyntax, value);
			}
		}

		private void AnalyzeSyntax(SyntaxNodeAnalysisContext context)
		{
			var compilation = (CSharpCompilation)context.Compilation;
			var options = new ProjectAnalyzer.Options()
			{
				breakOnError = true,
				writeSyntaxSuffix = false,
				scanChilderen = false
			};
			var analyzer = new ProjectAnalyzer(compilation, options);
			analyzer.SyntaxErrorCallback += Analyzer_SyntaxErrorCallback;

			void Analyzer_SyntaxErrorCallback(SyntaxError error)
			{
				var location = error.node.GetLocation();
				if (!location.IsInSource || Location.None.Equals(location)) return;
				var diagnostic = Diagnostic.Create(Rule, location, error.message);
				context.ReportDiagnostic(diagnostic);
			}

			analyzer.Analyze(context.Node);
		}
	}
}
