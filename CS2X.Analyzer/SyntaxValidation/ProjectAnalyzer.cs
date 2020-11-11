using RoslynProject = Microsoft.CodeAnalysis.Project;

using System.Linq;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using System.Threading.Tasks;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using System;
using Microsoft.CodeAnalysis.Operations;

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

		private const string boxingErrorMessage = "Runtime does not support boxing";
		private const string boxingDelegateErrorMessage = "Cannot bind to non-static struct method as boxing is not supported";

		public delegate void SyntaxErrorCallbackMethod(SyntaxError error);
		public event SyntaxErrorCallbackMethod SyntaxErrorCallback;

		private void FireSyntaxErrorCallback(SyntaxNode syntax, string message)
		{
			message = "CS2X ERROR: " + message;
			if (options.writeSyntaxSuffix) message += $" ({syntax})";
			System.Diagnostics.Debug.WriteLine(message);
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
			bool success = true;
			foreach (var document in project.Documents)
			{
				if (document.SourceCodeKind != SourceCodeKind.Regular) continue;
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
			var nodes = root.DescendantNodes();
			bool success = true;
			foreach (var node in nodes)
			{
				if (!Analyze(node))
				{
					if (options.breakOnError) return false;
					success = false;
				}
			}
			return success;
		}

		public bool Analyze(SyntaxNode syntax)
		{
			var kind = syntax.Kind();
			switch (kind)
			{
				// assume valid
				case SyntaxKind.CompilationUnit:
				case SyntaxKind.NamespaceDeclaration:
				case SyntaxKind.InterfaceDeclaration:
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
				case SyntaxKind.MultiplyAssignmentExpression:
				case SyntaxKind.DivideAssignmentExpression:
				case SyntaxKind.AndAssignmentExpression:
				case SyntaxKind.OrAssignmentExpression:
				case SyntaxKind.ExclusiveOrAssignmentExpression:
				case SyntaxKind.RightShiftAssignmentExpression:
				case SyntaxKind.LeftShiftAssignmentExpression:
				case SyntaxKind.RightShiftExpression:
				case SyntaxKind.LeftShiftExpression:
				case SyntaxKind.ModuloExpression:
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
				case SyntaxKind.ArrayCreationExpression:
				case SyntaxKind.StackAllocArrayCreationExpression:
				case SyntaxKind.ArrayType:
				case SyntaxKind.PointerType:
				case SyntaxKind.PointerIndirectionExpression:
				case SyntaxKind.PointerMemberAccessExpression:
				case SyntaxKind.AddressOfExpression:
				case SyntaxKind.GenericName:
				case SyntaxKind.TypeArgumentList:
				case SyntaxKind.TypeParameterList:
				case SyntaxKind.TypeParameter:
				case SyntaxKind.ElementAccessExpression:
				case SyntaxKind.BracketedArgumentList:
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
				case SyntaxKind.ThisConstructorInitializer:
				case SyntaxKind.FixedStatement:
				case SyntaxKind.ArrowExpressionClause:
				case SyntaxKind.ConditionalExpression:
				case SyntaxKind.FieldDeclaration:
				case SyntaxKind.OmittedArraySizeExpression:
				case SyntaxKind.ThrowExpression:
				case SyntaxKind.SimpleBaseType:
				case SyntaxKind.UsingDirective:
				case SyntaxKind.IdentifierName:
				case SyntaxKind.QualifiedName:
				case SyntaxKind.BaseList:
				case SyntaxKind.AttributeList:
				case SyntaxKind.AttributeArgumentList:
				case SyntaxKind.AttributeArgument:
				case SyntaxKind.Attribute:
				case SyntaxKind.AttributeTargetSpecifier:
				case SyntaxKind.AliasQualifiedName:
				case SyntaxKind.PredefinedType:
				case SyntaxKind.IncompleteMember:
				case SyntaxKind.EmptyStatement:
				case SyntaxKind.UncheckedExpression:
				case SyntaxKind.IsExpression:
					return true;

				// further analysis needed
				case SyntaxKind.ClassDeclaration: return Analyze((ClassDeclarationSyntax)syntax);
				case SyntaxKind.StructDeclaration: return Analyze((StructDeclarationSyntax)syntax);
				case SyntaxKind.MethodDeclaration: return Analyze((MethodDeclarationSyntax)syntax);
				case SyntaxKind.PropertyDeclaration: return Analyze((PropertyDeclarationSyntax)syntax);
				case SyntaxKind.DelegateDeclaration: return Analyze((DelegateDeclarationSyntax)syntax);
				case SyntaxKind.ParameterList: return Analyze((ParameterListSyntax)syntax);
				case SyntaxKind.VariableDeclaration: return Analyze((VariableDeclarationSyntax)syntax);
				case SyntaxKind.ArrayRankSpecifier: return Analyze((ArrayRankSpecifierSyntax)syntax);
				case SyntaxKind.UsingStatement: return Analyze((UsingStatementSyntax)syntax);
				case SyntaxKind.NameEquals: return Analyze((NameEqualsSyntax)syntax);
				case SyntaxKind.ObjectCreationExpression: return Analyze((ObjectCreationExpressionSyntax)syntax);
				case SyntaxKind.EqualsValueClause: return Analyze((EqualsValueClauseSyntax)syntax);
				case SyntaxKind.Argument: return Analyze((ArgumentSyntax)syntax);

				case SyntaxKind.AddAssignmentExpression:
				case SyntaxKind.SubtractAssignmentExpression:
				case SyntaxKind.SimpleAssignmentExpression: return Analyze((AssignmentExpressionSyntax)syntax);

				case SyntaxKind.CastExpression: return Analyze((CastExpressionSyntax)syntax);

				case SyntaxKind.ObjectInitializerExpression:
				case SyntaxKind.ArrayInitializerExpression:
					return Analyze((InitializerExpressionSyntax)syntax);

				// unsupported syntax error
				default:
					FireSyntaxErrorCallback(syntax, "Unsupported SyntaxKind: " + kind.ToString());
					return false;
			}
		}

		public bool Analyze(ClassDeclarationSyntax syntax)
		{
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var type = semanticModel.GetDeclaredSymbol(syntax);
			if (type.Interfaces.Any(x => x.OriginalDefinition.IsEqual(specialTypes.ienumeratorT)) || type.Interfaces.Any(x => x.OriginalDefinition.IsEqual(specialTypes.ienumerator)))
			{
				FireSyntaxErrorCallback(syntax, "Only structs can implement IEnumerator");
				return false;
			}
			return true;
		}

		public bool Analyze(StructDeclarationSyntax syntax)
		{
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var type = semanticModel.GetDeclaredSymbol(syntax);
			if (type.Interfaces.Contains(specialTypes.ienumerableT) || type.Interfaces.Contains(specialTypes.ienumerable))
			{
				FireSyntaxErrorCallback(syntax, "Only classes can implement IEnumerable");
				return false;
			}
			return true;
		}

		public bool Analyze(MethodDeclarationSyntax syntax)
		{
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var method = semanticModel.GetDeclaredSymbol(syntax);
			if (method.ContainingType.TypeKind == TypeKind.Interface && syntax.Body != null)
			{
				FireSyntaxErrorCallback(syntax, "Interface method cannot have body");
				return false;
			}
			if (method.ContainingType.TypeKind != TypeKind.Interface && !specialTypes.IgnoredSpecialGenericInterfaceMethod(method))
			{
				var returnType = semanticModel.GetTypeInfo(syntax.ReturnType).Type;
				if (returnType != null && returnType.TypeKind == TypeKind.Interface)
				{
					FireSyntaxErrorCallback(syntax, "Return type cannot be interface");
					return false;
				}
			}
			return true;
		}

		public bool Analyze(PropertyDeclarationSyntax syntax)
		{
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var property = semanticModel.GetDeclaredSymbol(syntax);
			if
			(
				property.ContainingType.TypeKind == TypeKind.Interface &&
				(syntax.AccessorList != null && syntax.AccessorList.Accessors.Any(x => x.Body != null) || syntax.ExpressionBody != null || syntax.Initializer != null)
			)
			{
				FireSyntaxErrorCallback(syntax, "Interface property cannot have 'get' or 'set' body");
				return false;
			}
			var type = semanticModel.GetTypeInfo(syntax.Type).Type;
			if (type != null && type.TypeKind == TypeKind.Interface)
			{
				FireSyntaxErrorCallback(syntax, "Property type cannot be interface");
				return false;
			}
			return true;
		}

		public bool Analyze(DelegateDeclarationSyntax syntax)
		{
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var returnType = semanticModel.GetTypeInfo(syntax.ReturnType).Type;
			if (returnType != null && returnType.TypeKind == TypeKind.Interface)
			{
				FireSyntaxErrorCallback(syntax, "Return type cannot be interface");
				return false;
			}
			return true;
		}

		public bool Analyze(ParameterListSyntax syntax)
		{
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			foreach (var parameter in syntax.Parameters)
			{
				var symbol = semanticModel.GetDeclaredSymbol(parameter);
				if (symbol != null && symbol.IsOptional && !specialTypes.attributeType.IsEqual(symbol.ContainingType.BaseType))
				{
					FireSyntaxErrorCallback(syntax, "Optional parameters not supported");
					return false;
				}

				var type = semanticModel.GetTypeInfo(parameter.Type).Type;
				if (type != null && type.TypeKind == TypeKind.Interface)
				{
					FireSyntaxErrorCallback(syntax, "Type cannot be interface");
					return false;
				}
			}
			return true;
		}

		public bool Analyze(VariableDeclarationSyntax syntax)
		{
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var type = semanticModel.GetTypeInfo(syntax.Type).Type;
			if (type != null && type.TypeKind == TypeKind.Interface)
			{
				FireSyntaxErrorCallback(syntax, "Type cannot be interface");
				return false;
			}
			return true;
		}

		public bool Analyze(ArrayRankSpecifierSyntax syntax)
		{
			if (syntax.Rank != 1)
			{
				FireSyntaxErrorCallback(syntax, "Multi-rank arrays not supported supported");
				return false;
			}
			return true;
		}

		public bool Analyze(InitializerExpressionSyntax syntax)
		{
			if (syntax.Parent is ObjectCreationExpressionSyntax || syntax.Parent is ArrayCreationExpressionSyntax)
			{
				if (!(syntax.Parent.Parent is EqualsValueClauseSyntax) && !(syntax.Parent.Parent is AssignmentExpressionSyntax))
				{
					FireSyntaxErrorCallback(syntax, "Initializers only supported after 'EqualsValueClause' contexts");
					return false;
				}
			}
			return true;
		}

		public bool Analyze(UsingStatementSyntax syntax)
		{
			if (syntax.Expression != null)
			{
				FireSyntaxErrorCallback(syntax, "Multi-rank arrays not supported supported");
				return false;
			}
			return true;
		}

		public bool Analyze(NameEqualsSyntax syntax)
		{
			if (!(syntax.Parent is AttributeArgumentSyntax) && !(syntax.Parent is UsingDirectiveSyntax))
			{
				FireSyntaxErrorCallback(syntax, "You cannot set type elements in this mannor");
				return false;
			}
			return true;
		}

		public bool Analyze(ObjectCreationExpressionSyntax syntax)
		{
			// check if delegate constructor is boxing
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var type = semanticModel.GetTypeInfo(syntax).Type;
			if (type.TypeKind == TypeKind.Delegate && syntax.ArgumentList != null && syntax.ArgumentList.Arguments.Count != 0)
			{
				var argument = syntax.ArgumentList.Arguments[0];
				var symbol = semanticModel.GetSymbolInfo(argument.Expression).Symbol;
				if (symbol is IMethodSymbol method)
				{
					if (IsInvalidDelegateMethod(method))
					{
						FireSyntaxErrorCallback(syntax, boxingDelegateErrorMessage);
						return false;
					}
				}
			}
			return true;
		}

		public bool Analyze(EqualsValueClauseSyntax syntax)
		{
			return ValidateBoxing(syntax, syntax.Value);
		}

		public bool Analyze(ArgumentSyntax syntax)
		{
			return ValidateBoxing(syntax, syntax.Expression);
		}

		public bool Analyze(AssignmentExpressionSyntax syntax)
		{
			return ValidateBoxing(syntax, syntax.Left, syntax.Right);
		}

		public bool Analyze(CastExpressionSyntax syntax)
		{
			return ValidateBoxing(syntax, syntax.Type, syntax.Expression);
		}

		private bool ValidateBoxing(SyntaxNode syntax, SyntaxNode right)
		{
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);
			var op = semanticModel.GetOperation(syntax);
			if (op != null && op.Children != null && op.Children.Count() != 0)
			{
				var left = op.Children.First();
				if (left.Kind == OperationKind.Conversion)
				{
					// check if assignment is boxing
					var conversionOp = (IConversionOperation)op.Children.First();
					var leftType = conversionOp.Type;
					var rightType = semanticModel.GetTypeInfo(right).Type;
					if (leftType == null || rightType == null) return true;
					if
					(
						(leftType.SpecialType == SpecialType.System_Object && rightType.IsValueType) ||
						(leftType.IsValueType && rightType.SpecialType == SpecialType.System_Object)
					)
					{
						if (!conversionOp.Conversion.IsUserDefined)
						{
							FireSyntaxErrorCallback(syntax, boxingErrorMessage);
							return false;
						}
					}
				}
				else if (left.Kind == OperationKind.DelegateCreation)
				{
					// check if delegate creation is boxing
					var rightSymbol = semanticModel.GetSymbolInfo(right).Symbol;
					if (rightSymbol is IMethodSymbol method)
					{
						if (IsInvalidDelegateMethod(method))
						{
							FireSyntaxErrorCallback(syntax, boxingDelegateErrorMessage);
							return false;
						}
					}
				}
			}
			return true;
		}

		private bool ValidateBoxing(SyntaxNode syntax, SyntaxNode left, SyntaxNode right)
		{
			var semanticModel = compilation.GetSemanticModel(syntax.SyntaxTree);

			// check if conversion is boxing
			var conversion = semanticModel.GetConversion(syntax);
			if (conversion == null) return true;
			if (conversion.IsBoxing || conversion.IsUnboxing)
			{
				FireSyntaxErrorCallback(syntax, boxingErrorMessage);
				return false;
			}

			// check if delegate creation is boxing
			var leftType = semanticModel.GetTypeInfo(left).Type;
			if (leftType != null && leftType.TypeKind == TypeKind.Delegate)
			{
				var symbol = semanticModel.GetSymbolInfo(right).Symbol;
				if (symbol != null && symbol is IMethodSymbol method)
				{
					if (IsInvalidDelegateMethod(method))
					{
						FireSyntaxErrorCallback(syntax, boxingDelegateErrorMessage);
						return false;
					}
				}
			}

			// check if assignment is boxing
			var rightType = semanticModel.GetTypeInfo(right).Type;
			if (leftType == null || rightType == null) return true;

			if
			(
				(leftType.SpecialType == SpecialType.System_Object && rightType.IsValueType) ||
				(leftType.IsValueType && rightType.SpecialType == SpecialType.System_Object)
			)
			{
				if (!conversion.IsUserDefined)
				{
					FireSyntaxErrorCallback(syntax, boxingErrorMessage);
					return false;
				}
			}
			return true;
		}

		private bool IsInvalidDelegateMethod(IMethodSymbol method)
		{
			return !method.IsStatic && method.ContainingType.IsValueType;
		}
	}
}
