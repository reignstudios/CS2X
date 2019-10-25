using RoslynProject = Microsoft.CodeAnalysis.Project;

using System;
using System.Collections.Generic;
using System.Text;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using System.Threading.Tasks;
using Microsoft.CodeAnalysis.CSharp.Syntax;

namespace CS2X.Core.SyntaxValidation
{
	public class SyntaxError
	{
		public readonly SyntaxNode node;
		public readonly string message;

		public SyntaxError(SyntaxNode node, string message)
		{
			this.node = node;
			this.message = message;
		}
	}

	public class ProjectAnalyzer
	{
		public struct Options
		{
			public bool breakOnError;
		}

		private readonly Options options;

		public delegate void SyntaxErrorCallbackMethod(SyntaxError error);
		public event SyntaxErrorCallbackMethod SyntaxErrorCallback;

		private void FireSyntaxErrorCallback(SyntaxNode node, string message)
		{
			SyntaxErrorCallback?.Invoke(new SyntaxError(node, "CS2X: " + message));
		}

		public ProjectAnalyzer(Options options)
		{
			this.options = options;
		}

		public async Task<bool> Analyze(RoslynProject project)
		{
			bool success = true;
			foreach (var document in project.Documents)
			{
				var syntaxTree = await document.GetSyntaxTreeAsync();
				if (!Analyze(syntaxTree))
				{
					if (options.breakOnError) return false;
					success = false;
				}
			}
			return success;
		}

		public bool Analyze(SyntaxTree tree)
		{
			var root = tree.GetRoot();
			return Analyze(root);
		}

		public bool Analyze(SyntaxNode syntax)
		{
			var kind = syntax.Kind();
			switch (kind)
			{
				// break and analyze childeren
				case SyntaxKind.CompilationUnit:
				case SyntaxKind.NamespaceDeclaration:
				case SyntaxKind.ClassDeclaration:
				case SyntaxKind.StructDeclaration:
				case SyntaxKind.EnumDeclaration:
				case SyntaxKind.EnumMemberDeclaration:
				case SyntaxKind.MethodDeclaration:
				case SyntaxKind.ConstructorDeclaration:
				case SyntaxKind.DestructorDeclaration:
				case SyntaxKind.Block:
				case SyntaxKind.ExpressionStatement:
				case SyntaxKind.InvocationExpression:
				case SyntaxKind.LocalDeclarationStatement:
				case SyntaxKind.VariableDeclaration:
				case SyntaxKind.VariableDeclarator:
				case SyntaxKind.SimpleMemberAccessExpression:
				case SyntaxKind.ArgumentList:
				case SyntaxKind.Argument:
				case SyntaxKind.StringLiteralExpression:
				case SyntaxKind.NumericLiteralExpression:
				case SyntaxKind.TrueLiteralExpression:
				case SyntaxKind.FalseLiteralExpression:
				case SyntaxKind.NullLiteralExpression:
				case SyntaxKind.IfStatement:
				case SyntaxKind.ElseClause:
				case SyntaxKind.ForEachStatement:
				case SyntaxKind.ForStatement:
				case SyntaxKind.WhileStatement:
				case SyntaxKind.DoStatement:
				case SyntaxKind.AddExpression:
				case SyntaxKind.SubtractExpression:
				case SyntaxKind.MultiplyExpression:
				case SyntaxKind.DivideExpression:
				case SyntaxKind.UnaryMinusExpression:
				case SyntaxKind.PreIncrementExpression:
				case SyntaxKind.PreDecrementExpression:
				case SyntaxKind.PostIncrementExpression:
				case SyntaxKind.PostDecrementExpression:
				case SyntaxKind.AddAssignmentExpression:
				case SyntaxKind.SubtractAssignmentExpression:
				case SyntaxKind.MultiplyAssignmentExpression:
				case SyntaxKind.DivideAssignmentExpression:
				case SyntaxKind.LogicalAndExpression:
				case SyntaxKind.LogicalNotExpression:
				case SyntaxKind.LogicalOrExpression:
				case SyntaxKind.NotEqualsExpression:
				case SyntaxKind.EqualsExpression:
				case SyntaxKind.LessThanExpression:
				case SyntaxKind.GreaterThanExpression:
				case SyntaxKind.LessThanOrEqualExpression:
				case SyntaxKind.GreaterThanOrEqualExpression:
				case SyntaxKind.ReturnStatement:
				case SyntaxKind.BreakStatement:
				case SyntaxKind.ContinueStatement:
				case SyntaxKind.EqualsValueClause:
				case SyntaxKind.ObjectCreationExpression:
				case SyntaxKind.ArrayCreationExpression:
				case SyntaxKind.ArrayType:
				case SyntaxKind.SimpleAssignmentExpression:
				case SyntaxKind.GenericName:
				case SyntaxKind.TypeArgumentList:
				case SyntaxKind.TypeParameterList:
				case SyntaxKind.TypeParameter:
				case SyntaxKind.ElementAccessExpression:
				case SyntaxKind.BracketedArgumentList:
				case SyntaxKind.CastExpression:
				case SyntaxKind.ThisExpression:
				case SyntaxKind.SizeOfExpression:
				case SyntaxKind.TypeOfExpression:
				case SyntaxKind.SwitchStatement:
				case SyntaxKind.SwitchSection:
				case SyntaxKind.CaseSwitchLabel:
				case SyntaxKind.DefaultSwitchLabel:
				case SyntaxKind.ExplicitInterfaceSpecifier:
				case SyntaxKind.DefaultExpression:
				case SyntaxKind.DefaultLiteralExpression:
					break;

				// skip and assume valid
				case SyntaxKind.UsingDirective:
				case SyntaxKind.IdentifierName:
				case SyntaxKind.QualifiedName:
				case SyntaxKind.BaseList:
					return true;

				// further analysis needed
				case SyntaxKind.InterfaceDeclaration: return Ayalyze((InterfaceDeclarationSyntax)syntax);
				case SyntaxKind.ParameterList: return Ayalyze((ParameterListSyntax)syntax);
				case SyntaxKind.FieldDeclaration: return Ayalyze((FieldDeclarationSyntax)syntax);
				case SyntaxKind.PropertyDeclaration: return Ayalyze((PropertyDeclarationSyntax)syntax);
				case SyntaxKind.DelegateDeclaration: return Ayalyze((DelegateDeclarationSyntax)syntax);
				case SyntaxKind.PredefinedType: return Ayalyze((PredefinedTypeSyntax)syntax);
				case SyntaxKind.ArrayRankSpecifier: return Ayalyze((ArrayRankSpecifierSyntax)syntax);
				case SyntaxKind.ArrayInitializerExpression: return Ayalyze((InitializerExpressionSyntax)syntax);

				// unsupported syntax error
				default:
					FireSyntaxErrorCallback(syntax, "Unsupported SyntaxKind: " + kind.ToString());
					return false;
			}

			// analyze child nodes
			bool success = true;
			var childeren = syntax.ChildNodes();
			foreach (var child in childeren)
			{
				if (!Analyze(child))
				{
					if (options.breakOnError) return false;
					success = false;
				}
			}

			return success;
		}

		public bool Ayalyze(InterfaceDeclarationSyntax syntax)
		{
			var childeren = syntax.ChildNodes();
			foreach (var child in childeren)
			{
				var kind = child.Kind();
				if (kind == SyntaxKind.MethodDeclaration)
				{
					var method = (MethodDeclarationSyntax)child;
					if (method.Body != null)
					{
						FireSyntaxErrorCallback(syntax, "Interface method cannot have a body: " + method.ToString());
						return false;
					}
				}
				else if (kind == SyntaxKind.PropertyDeclaration)
				{
					var property = (PropertyDeclarationSyntax)child;
					if (property.ExpressionBody != null || property.Initializer != null)
					{
						FireSyntaxErrorCallback(syntax, "Interface property cannot have a body: " + property.ToString());
						return false;
					}
				}
			}
			return true;
		}

		public bool Ayalyze(ParameterListSyntax syntax)
		{
			return true;
		}

		public bool Ayalyze(FieldDeclarationSyntax syntax)
		{
			return true;
		}

		public bool Ayalyze(PropertyDeclarationSyntax syntax)
		{
			return true;
		}

		public bool Ayalyze(DelegateDeclarationSyntax syntax)
		{
			return true;
		}

		public bool Ayalyze(PredefinedTypeSyntax syntax)
		{
			if (syntax.Keyword.ValueText == "decimal")
			{
				FireSyntaxErrorCallback(syntax, "decimal types not supported: " + syntax.ToString());
				return false;
			}
			return true;
		}

		public bool Ayalyze(ArrayRankSpecifierSyntax syntax)
		{
			return syntax.Rank == 1;
		}

		public bool Ayalyze(InitializerExpressionSyntax syntax)
		{
			return true;
		}
	}
}
