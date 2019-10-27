using RoslynProject = Microsoft.CodeAnalysis.Project;

using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using System.Threading.Tasks;
using Microsoft.CodeAnalysis.CSharp.Syntax;

namespace CS2X.Analyzer.SyntaxValidation
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
			public bool writeSyntaxSuffix;
			public bool scanChilderen;
		}

		private CSharpCompilation compilation;
		private readonly Options options;
		private readonly SpecialTypes specialTypes;

		public delegate void SyntaxErrorCallbackMethod(SyntaxError error);
		public event SyntaxErrorCallbackMethod SyntaxErrorCallback;

		private void FireSyntaxErrorCallback(SyntaxNode syntax, string message)
		{
			message = "CS2X: " + message;
			if (options.writeSyntaxSuffix) message += $" ({syntax})";
			SyntaxErrorCallback?.Invoke(new SyntaxError(syntax, message));
		}

		public ProjectAnalyzer(CSharpCompilation compilation, Options options)
		{
			this.compilation = compilation;
			this.options = options;
			specialTypes = new SpecialTypes(compilation);
		}

		public void SetCompilation(CSharpCompilation compilation)
		{
			this.compilation = compilation;
		}

		public async Task<bool> Analyze(RoslynProject project)
		{
			foreach (var document in project.Documents)
			{
				var syntaxTree = await document.GetSyntaxTreeAsync();
				if (!Analyze(syntaxTree) && options.breakOnError) return false;
			}
			return true;
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
				case SyntaxKind.EnumDeclaration:
				case SyntaxKind.EnumMemberDeclaration:
				case SyntaxKind.ConstructorDeclaration:
				case SyntaxKind.DestructorDeclaration:
				case SyntaxKind.IndexerDeclaration:
				case SyntaxKind.OperatorDeclaration:
				case SyntaxKind.ConversionOperatorDeclaration:
				case SyntaxKind.Block:
				case SyntaxKind.ExpressionStatement:
				case SyntaxKind.InvocationExpression:
				case SyntaxKind.LocalDeclarationStatement:
				case SyntaxKind.VariableDeclarator:
				case SyntaxKind.SimpleMemberAccessExpression:
				case SyntaxKind.ArgumentList:
				case SyntaxKind.Argument:
				case SyntaxKind.CharacterLiteralExpression:
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
				case SyntaxKind.BitwiseAndExpression:
				case SyntaxKind.BitwiseNotExpression:
				case SyntaxKind.BitwiseOrExpression:
				case SyntaxKind.ReturnStatement:
				case SyntaxKind.BreakStatement:
				case SyntaxKind.ContinueStatement:
				case SyntaxKind.EqualsValueClause:
				case SyntaxKind.ObjectCreationExpression:
				case SyntaxKind.ArrayCreationExpression:
				case SyntaxKind.StackAllocArrayCreationExpression:
				case SyntaxKind.ArrayType:
				case SyntaxKind.PointerType:
				case SyntaxKind.PointerIndirectionExpression:
				case SyntaxKind.PointerMemberAccessExpression:
				case SyntaxKind.AddressOfExpression:
				case SyntaxKind.SimpleAssignmentExpression:
				case SyntaxKind.GenericName:
				case SyntaxKind.TypeArgumentList:
				case SyntaxKind.TypeParameterList:
				case SyntaxKind.TypeParameter:
				case SyntaxKind.ElementAccessExpression:
				case SyntaxKind.BracketedArgumentList:
				case SyntaxKind.CastExpression:
				case SyntaxKind.ThisExpression:
				case SyntaxKind.BaseExpression:
				case SyntaxKind.SizeOfExpression:
				case SyntaxKind.TypeOfExpression:
				case SyntaxKind.SwitchStatement:
				case SyntaxKind.SwitchSection:
				case SyntaxKind.CaseSwitchLabel:
				case SyntaxKind.DefaultSwitchLabel:
				case SyntaxKind.ExplicitInterfaceSpecifier:
				case SyntaxKind.DefaultExpression:
				case SyntaxKind.DefaultLiteralExpression:
				case SyntaxKind.TypeParameterConstraintClause:
				case SyntaxKind.ClassConstraint:
				case SyntaxKind.StructConstraint:
				case SyntaxKind.TypeConstraint:
				case SyntaxKind.BracketedParameterList:
				case SyntaxKind.Parameter:
				case SyntaxKind.AccessorList:
				case SyntaxKind.GetAccessorDeclaration:
				case SyntaxKind.SetAccessorDeclaration:
				case SyntaxKind.DeclarationExpression:
				case SyntaxKind.SingleVariableDesignation:
				case SyntaxKind.ParenthesizedExpression:
				case SyntaxKind.TryStatement:
				case SyntaxKind.CatchClause:
				case SyntaxKind.CatchDeclaration:
				case SyntaxKind.ThrowStatement:
				case SyntaxKind.BaseConstructorInitializer:
				case SyntaxKind.FixedStatement:
				case SyntaxKind.ArrowExpressionClause:
				case SyntaxKind.ConditionalExpression:
				case SyntaxKind.FieldDeclaration:
				case SyntaxKind.OmittedArraySizeExpression:
					break;

				// skip and assume valid
				case SyntaxKind.UsingDirective:
				case SyntaxKind.IdentifierName:
				case SyntaxKind.QualifiedName:
				case SyntaxKind.BaseList:
				case SyntaxKind.AttributeList:
					return true;

				// further analysis needed
				case SyntaxKind.ClassDeclaration: return Analyze((ClassDeclarationSyntax)syntax);
				case SyntaxKind.StructDeclaration: return Analyze((StructDeclarationSyntax)syntax);
				case SyntaxKind.InterfaceDeclaration: return Analyze((InterfaceDeclarationSyntax)syntax);
				case SyntaxKind.MethodDeclaration: return Analyze((MethodDeclarationSyntax)syntax);
				case SyntaxKind.DelegateDeclaration: return Analyze((DelegateDeclarationSyntax)syntax);
				case SyntaxKind.ParameterList: return Analyze((ParameterListSyntax)syntax);
				case SyntaxKind.VariableDeclaration: return Analyze((VariableDeclarationSyntax)syntax);
				case SyntaxKind.PropertyDeclaration: return Analyze((PropertyDeclarationSyntax)syntax);
				case SyntaxKind.PredefinedType: return Analyze((PredefinedTypeSyntax)syntax);
				case SyntaxKind.ArrayRankSpecifier: return Analyze((ArrayRankSpecifierSyntax)syntax);
				case SyntaxKind.UsingStatement: return Analyze((UsingStatementSyntax)syntax);

				case SyntaxKind.ObjectInitializerExpression:
				case SyntaxKind.ArrayInitializerExpression:
					return Analyze((InitializerExpressionSyntax)syntax);

				// unsupported syntax error
				default:
					FireSyntaxErrorCallback(syntax, "Unsupported SyntaxKind: " + kind.ToString());
					return false;
			}

			// analyze child nodes
			return Analyze(syntax.ChildNodes());
		}

		public bool Analyze(IEnumerable<SyntaxNode> syntaxNodes)
		{
			if (!options.scanChilderen) return true;

			// analyze child nodes
			bool success = true;
			foreach (var node in syntaxNodes)
			{
				if (!Analyze(node))
				{
					if (options.breakOnError) return false;
					success = false;
				}
			}

			return success;
		}

		public bool Analyze(ClassDeclarationSyntax syntax)
		{
			bool success = true;
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var type = semanticModel.GetDeclaredSymbol(syntax);
			if (type.Interfaces.Contains(specialTypes.ienumeratorT) || type.Interfaces.Contains(specialTypes.ienumerator))
			{
				FireSyntaxErrorCallback(syntax, "Only structs can implement IEnumerator");
				if (options.breakOnError) return false;
				success = false;
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(StructDeclarationSyntax syntax)
		{
			bool success = true;
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var type = semanticModel.GetDeclaredSymbol(syntax);
			if (type.Interfaces.Contains(specialTypes.ienumerableT) || type.Interfaces.Contains(specialTypes.ienumerable))
			{
				FireSyntaxErrorCallback(syntax, "Only classes can implement IEnumerable");
				if (options.breakOnError) return false;
				success = false;
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(InterfaceDeclarationSyntax syntax)
		{
			bool success = true;
			var childeren = syntax.ChildNodes();
			foreach (var child in childeren)
			{
				var kind = child.Kind();
				if (kind == SyntaxKind.MethodDeclaration)
				{
					var method = (MethodDeclarationSyntax)child;
					if (method.Body != null)
					{
						FireSyntaxErrorCallback(syntax, "Method cannot have a body");
						if (options.breakOnError) return false;
						success = false;
					}
				}
				else if (kind == SyntaxKind.PropertyDeclaration)
				{
					var property = (PropertyDeclarationSyntax)child;
					if (property.ExpressionBody != null || property.Initializer != null)
					{
						FireSyntaxErrorCallback(syntax, "Property cannot have a body");
						if (options.breakOnError) return false;
						success = false;
					}
				}
			}
			return Analyze(childeren) && success;
		}

		public bool Analyze(MethodDeclarationSyntax syntax)
		{
			bool success = true;
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var method = semanticModel.GetDeclaredSymbol(syntax);
			if (method.ContainingType.TypeKind != TypeKind.Interface && !specialTypes.IgnoredSpecialGenericInterfaceMethod(method))
			{
				var returnType = semanticModel.GetTypeInfo(syntax.ReturnType).Type;
				if (returnType != null && returnType.TypeKind == TypeKind.Interface)
				{
					FireSyntaxErrorCallback(syntax, "Return type cannot be interface");
					if (options.breakOnError) return false;
					success = false;
				}
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(DelegateDeclarationSyntax syntax)
		{
			bool success = true;
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var returnType = semanticModel.GetTypeInfo(syntax.ReturnType).Type;
			if (returnType != null && returnType.TypeKind == TypeKind.Interface)
			{
				FireSyntaxErrorCallback(syntax, "Return type cannot be interface");
				if (options.breakOnError) return false;
				success = false;
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(ParameterListSyntax syntax)
		{
			bool success = true;
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			foreach (var parameter in syntax.Parameters)
			{
				var type = semanticModel.GetTypeInfo(parameter.Type).Type;
				if (type != null && type.TypeKind == TypeKind.Interface)
				{
					FireSyntaxErrorCallback(syntax, "Type cannot be interface");
					if (options.breakOnError) return false;
					success = false;
				}
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(VariableDeclarationSyntax syntax)
		{
			bool success = true;
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var type = semanticModel.GetTypeInfo(syntax.Type).Type;
			if (type != null && type.TypeKind == TypeKind.Interface)
			{
				FireSyntaxErrorCallback(syntax, "Type cannot be interface");
				if (options.breakOnError) return false;
				success = false;
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(PropertyDeclarationSyntax syntax)
		{
			bool success = true;
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var type = semanticModel.GetTypeInfo(syntax.Type).Type;
			if (type != null && type.TypeKind == TypeKind.Interface)
			{
				FireSyntaxErrorCallback(syntax, "Property type cannot be interface");
				if (options.breakOnError) return false;
				success = false;
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(PredefinedTypeSyntax syntax)
		{
			bool success = true;
			if (syntax.Keyword.ValueText == "decimal")
			{
				FireSyntaxErrorCallback(syntax, "Decimal types not supported");
				if (options.breakOnError) return false;
				success = false;
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(ArrayRankSpecifierSyntax syntax)
		{
			bool success = true;
			if (syntax.Rank != 1)
			{
				FireSyntaxErrorCallback(syntax, "Multi-rank arrays not supported supported");
				if (options.breakOnError) return false;
				success = false;
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(InitializerExpressionSyntax syntax)
		{
			bool success = false;
			if (syntax.Parent is ObjectCreationExpressionSyntax || syntax.Parent is ArrayCreationExpressionSyntax)
			{
				success = syntax.Parent.Parent is EqualsValueClauseSyntax;
			}

			if (!success)
			{
				FireSyntaxErrorCallback(syntax, "Initializers only supported after 'EqualsValueClause' contexts");
				if (options.breakOnError) return false;
			}
			return Analyze(syntax.ChildNodes()) && success;
		}

		public bool Analyze(UsingStatementSyntax syntax)
		{
			bool success = true;
			if (syntax.Expression != null)
			{
				FireSyntaxErrorCallback(syntax, "Multi-rank arrays not supported supported");
				if (options.breakOnError) return false;
				success = false;
			}
			return Analyze(syntax.ChildNodes()) && success;
		}
	}
}
