using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Symbols;
using System.Collections.Immutable;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using System.Runtime.InteropServices;
using Microsoft.CodeAnalysis.FindSymbols;

namespace CS2X.Core.Transpilers.C
{
	public sealed partial class Transpiler_C
	{
		private InstructionalBody.Local TryAddLocal(string identifier, ITypeSymbol type)
		{
			if (type.TypeKind == TypeKind.Interface) throw new NotSupportedException("Locals cannot be an interface");
			InstructionalBody.Local local = null;
			local = instructionalBody.locals.FirstOrDefault(x => x.Equals(identifier, type));
			if (local == null)
			{
				local = new InstructionalBody.Local(block, identifier, type, $"l_{identifier}_{instructionalBody.locals.Count}");
				instructionalBody.locals.Add(local);
			}
			return local;
		}

		private string TryAddStatementLocal(ITypeSymbol type, string prefix, string suffix)
		{
			var localName = prefix + GetTypeFullName(type);
			if (suffix != null) localName += suffix;
			TrackPValueToIValueType(type);
			var localVar = instructionalBody.specialLocals.FirstOrDefault(x => x.name == localName && x.block == block);
			if (localVar == null) instructionalBody.specialLocals.Add(new InstructionalBody.SpecialLocal(block, GetTypeFullNameRef(type), localName));
			return localName;
		}

		private delegate void BlockStartCallbackMethod();
		private BlockStartCallbackMethod BlockStartCallback;
		private void WriteBody(BlockSyntax body)
		{
			var origBlock = block;
			block = body;

			// write special pre block syntax
			if (BlockStartCallback != null)
			{
				BlockStartCallback();
				BlockStartCallback = null;
			}

			// write statements
			if (blockStatementsOverride != null)
			{
				var statements = blockStatementsOverride;
				blockStatementsOverride = null;
				foreach (var statement in statements)
				{
					WriteStatement(statement);
				}
			}
			else
			{
				foreach (var statement in body.Statements)
				{
					WriteStatement(statement);
				}
			}
			block = origBlock;
		}

		private void WriteStatement(StatementSyntax statement)
		{
			if (statement is BlockSyntax)
			{
				writer.WriteLinePrefix('{');
				writer.AddTab();
				using (var stream = new MemoryStream())
				using (var subInstructionalBody = new InstructionalBody(stream, writer))
				{
					subInstructionalBody.locals.AddRange(instructionalBody.locals);// copy parent block locals
					var origWriter = writer;
					var origInstructionalBody = instructionalBody;
					writer = subInstructionalBody;
					instructionalBody = subInstructionalBody;

					// write body
					WriteBody((BlockSyntax)statement);

					// write define locals
					writer = origWriter;
					instructionalBody = origInstructionalBody;
					foreach (var local in subInstructionalBody.locals)
					{
						if (local.block == (BlockSyntax)statement)// only write locals part of this block
						{
							writer.WriteLinePrefix($"{GetTypeFullNameRef(local.type)} {local.name};");
						}
					}
					foreach (var local in subInstructionalBody.specialLocals)
					{
						if (local.block == (BlockSyntax)statement)// only write locals part of this block
						{
							writer.WriteLinePrefix($"{local.type} {local.name};");
						}
					}
				}
				writer.RemoveTab();
				writer.WriteLinePrefix('}');
			}
			else
			{
				if (statement is ExpressionStatementSyntax) ExpressionStatement((ExpressionStatementSyntax)statement);
				else if (statement is LocalDeclarationStatementSyntax) LocalDeclarationStatement((LocalDeclarationStatementSyntax)statement);
				else if (statement is IfStatementSyntax) IfStatement((IfStatementSyntax)statement);
				else if (statement is WhileStatementSyntax) WhileStatement((WhileStatementSyntax)statement);
				else if (statement is DoStatementSyntax) DoStatement((DoStatementSyntax)statement);
				else if (statement is ForStatementSyntax) ForStatement((ForStatementSyntax)statement);
				else if (statement is ForEachStatementSyntax) ForEachStatement((ForEachStatementSyntax)statement);
				else if (statement is SwitchStatementSyntax) SwitchStatement((SwitchStatementSyntax)statement);
				else if (statement is BreakStatementSyntax) BreakStatement((BreakStatementSyntax)statement);
				else if (statement is ContinueStatementSyntax) ContinueStatement((ContinueStatementSyntax)statement);
				else if (statement is FixedStatementSyntax) FixedStatement((FixedStatementSyntax)statement);
				else if (statement is ReturnStatementSyntax) WriteReturnStatement((ReturnStatementSyntax)statement);
				else if (statement is TryStatementSyntax) TryStatement((TryStatementSyntax)statement);
				else if (statement is ThrowStatementSyntax) ThrowStatement((ThrowStatementSyntax)statement);
				else if (statement is UsingStatementSyntax) UsingStatement((UsingStatementSyntax)statement);
				else if (statement is EmptyStatementSyntax) EmptyStatement((EmptyStatementSyntax)statement);
				else throw new NotSupportedException("Unsupported statement: " + statement.GetType());
			}
			BlockStartCallback = null;
		}

		private void ExpressionStatement(ExpressionStatementSyntax statement)
		{
			writer.WritePrefix();
			WriteExpression(statement.Expression);
			writer.WriteLine(';');
		}

		private List<InstructionalBody.Local> WriteLocalDeclaration(VariableDeclarationSyntax declaration, string delimiter, bool onlyWriteDelimiterIfNotLast, bool isFixedDeclaration)
		{
			var locals = new List<InstructionalBody.Local>();
			var last = declaration.Variables.LastOrDefault();
			foreach (var variable in declaration.Variables)
			{
				var type = ResolveType(declaration.Type);
				var local = TryAddLocal(variable.Identifier.ValueText, type);
				if (!locals.Contains(local)) locals.Add(local);
				if (variable.Initializer != null)
				{
					writer.WritePrefix(local.name + " = ");
					bool fixedArrayOffset = false, fixedStringOffset = false;
					if (isFixedDeclaration)
					{
						var initializerType = ResolveType(variable.Initializer.Value);
						if (initializerType.Kind == SymbolKind.ArrayType)
						{
							writer.Write($"({GetTypeFullNameRef(initializerType)})(((char*)");
							fixedArrayOffset = true;
						}
						else if (initializerType.SpecialType == SpecialType.System_String)
						{
							writer.Write("((char*)");
							fixedStringOffset = true;
						}
					}

					WriteExpression(variable.Initializer.Value);

					if (fixedArrayOffset)
					{
						writer.Write(") + ArrayOffset)");
					}
					else if (fixedStringOffset)
					{
						var runtimeHelperType = solution.coreLibProject.compilation.GetTypeByMetadataName("System.Runtime.CompilerServices.RuntimeHelpers");
						var offsetToStringDataMethod = FindPropertyByName(runtimeHelperType, "OffsetToStringData").GetMethod;
						writer.Write($") + {GetMethodFullName(offsetToStringDataMethod)}()");
					}

					if (!onlyWriteDelimiterIfNotLast) writer.Write(delimiter);
					else if (variable != last) writer.Write(delimiter);
				}
			}
			return locals;
		}

		private void WriteFlowControlStatement(StatementSyntax statement, string blockStart)
		{
			if (statement is BlockSyntax)
			{
				writer.WriteLine(blockStart);
				WriteStatement(statement);
			}
			else
			{
				writer.WriteLine(blockStart);
				var block = SyntaxFactory.Block();
				blockStatementsOverride = new List<StatementSyntax>();
				blockStatementsOverride.Add(statement);
				WriteStatement(block);
			}
		}

		private void LocalDeclarationStatement(LocalDeclarationStatementSyntax statement)
		{
			if (statement.IsConst) return;
			WriteLocalDeclaration(statement.Declaration, ';' + Environment.NewLine, false, false);
		}

		private void IfStatement(IfStatementSyntax statement)
		{
			writer.WritePrefix("if (");
			WriteExpression(statement.Condition);
			WriteFlowControlStatement(statement.Statement, ")");
			if (statement.Else != null) WriteFlowControlStatement(statement.Else.Statement, writer.prefix + "else");
		}

		private void WhileStatement(WhileStatementSyntax statement)
		{
			writer.WritePrefix("while (");
			WriteExpression(statement.Condition);
			WriteFlowControlStatement(statement.Statement, ")");
		}

		private void DoStatement(DoStatementSyntax statement)
		{
			writer.WriteLinePrefix("do");
			WriteStatement(statement.Statement);
			writer.WritePrefix("while (");
			WriteExpression(statement.Condition);
			writer.WriteLine(");");
		}

		private void ForStatement(ForStatementSyntax statement)
		{
			if (statement.Initializers.Count != 0) throw new NotSupportedException("'for' statement initializers are not supported");

			// variable initialization
			writer.WritePrefix("for (");
			writer.disablePrefix = true;
			WriteLocalDeclaration(statement.Declaration, ", ", true, false);
			writer.disablePrefix = false;
			writer.Write("; ");

			// condition
			WriteExpression(statement.Condition);
			writer.Write("; ");

			// incrementors
			var lastIncrementor = statement.Incrementors.LastOrDefault();
			foreach (var i in statement.Incrementors)
			{
				WriteExpression(i);
				if (i != lastIncrementor) writer.Write(", ");
			}

			// statement
			WriteFlowControlStatement(statement.Statement, ")");
		}

		private void ForEachStatement(ForEachStatementSyntax statement)
		{
			var collectionType = ResolveType(statement.Expression);
			if (collectionType.Kind == SymbolKind.ArrayType)
			{
				// get array object
				string identifierName = null;
				if (statement.Expression is IdentifierNameSyntax)
				{
					var syntax = (IdentifierNameSyntax)statement.Expression;
					var semanticModel = GetSemanticModel(syntax);
					var symbol = semanticModel.GetSymbolInfo(syntax).Symbol;
					if (symbol == null) throw new Exception("Failed to get symbol for IdentifierNameSyntax: " + syntax.ToFullString());
					if (symbol.Kind == SymbolKind.Local)
					{
						var type = ResolveType(syntax);
						var localExpressionResult = instructionalBody.locals.First(x => x.Equals(syntax.Identifier.ValueText, type));
						identifierName = localExpressionResult.name;
					}
					else if (symbol.Kind == SymbolKind.Parameter)
					{
						identifierName = GetParameterFullName((IParameterSymbol)symbol);
					}
					else if (symbol.Kind == SymbolKind.Field)
					{
						// check if caller is 'this' else handle as new local below
						var caller = GetCaller(statement.Expression);
						if (caller is ThisExpressionSyntax)
						{
							if (method.ContainingType.IsReferenceType) identifierName = "self->";
							else identifierName = "self.";
							identifierName += GetFieldFullName((IFieldSymbol)symbol);
						}
					}
					else if (symbol.Kind == SymbolKind.Property)
					{
						// handle as new local below
					}
					else if (symbol.Kind == SymbolKind.Method)
					{
						// handle as new local below
					}
					else
					{
						throw new NotSupportedException("Array 'foreach' loop with identifier kind not supported: " + symbol.Kind);
					}
				}

				// if no existing variable can be used make one
				if (identifierName == null)
				{
					var localExpressionResult = TryAddLocal(statement.Identifier.ValueText + "_ex", collectionType);
					identifierName = localExpressionResult.name;
					writer.WritePrefix($"{identifierName} = ");
					WriteExpression(statement.Expression);
					writer.WriteLine(';');
				}

				// get array length method
				var getLengthMethod = FindMethodByName(specialTypes.arrayType, "get_Length");
				getLengthMethod = ResolveMethod(getLengthMethod, method);

				// write for statement
				writer.WritePrefix("for (");
				var localIterator = TryAddLocal(statement.Identifier.ValueText + "_i", specialTypes.int32Type);
				writer.Write($"{localIterator.name} = 0; {localIterator.name} != {GetMethodFullName(getLengthMethod)}(({GetTypeFullName(specialTypes.arrayType)}*){identifierName}); ++{localIterator.name}");

				// write statement
				void WriteLocal()
				{
					var type = ResolveType(statement.Type);
					var local = TryAddLocal(statement.Identifier.ValueText, type);

					void writeExpression()
					{
						writer.Write(identifierName);
					}
					writer.WritePrefix($"{local.name} = ");
					WriteArrayElementAccessOffset(writeExpression, collectionType);
					writer.WriteLine($"[{localIterator.name}];");
				}

				if (statement.Statement is BlockSyntax)
				{
					BlockStartCallback = WriteLocal;
					WriteFlowControlStatement(statement.Statement, ")");
				}
				else// force block style syntax
				{
					writer.WriteLine(')');
					writer.WriteLinePrefix('{');
					writer.AddTab();
					WriteLocal();
					WriteStatement(statement.Statement);
					writer.RemoveTab();
					writer.WriteLinePrefix('}');
				}
			}
			else if (collectionType.Kind == SymbolKind.NamedType)
			{
				// get special CS2X enumerator object
				var getEnumeratorMethod = FindMethodByName(collectionType, "GetEnumerator");
				if (getEnumeratorMethod == null) throw new Exception("No valid CS2X 'GetEnumerator' method found on: " + collectionType.FullName());
				if (getEnumeratorMethod.DeclaredAccessibility != Accessibility.Public) throw new Exception("'GetEnumerator' must be public");
				getEnumeratorMethod = ResolveMethod(getEnumeratorMethod, method);
				var localExpressionResult = TryAddLocal(statement.Identifier.ValueText + "_en", getEnumeratorMethod.ReturnType);

				//write for statement
				var moveNextMethod = FindMethodByName(getEnumeratorMethod.ReturnType, "MoveNext");
				moveNextMethod = ResolveMethod(moveNextMethod, method);
				writer.WritePrefix($"for/*each*/ ({localExpressionResult.name} = {GetMethodFullName(getEnumeratorMethod)}(");
				WriteExpression(statement.Expression);
				writer.Write($"); {GetMethodFullName(moveNextMethod)}(&{localExpressionResult.name});");

				// write statement
				void WriteLocal()
				{
					var type = ResolveType(statement.Type);
					var local = TryAddLocal(statement.Identifier.ValueText, type);

					var getCurrentMethod = FindMethodByName(getEnumeratorMethod.ReturnType, "get_Current");
					if (getCurrentMethod == null) throw new Exception("No valid 'T Current' getter method found on: " + getEnumeratorMethod.ReturnType.FullName());
					if (getCurrentMethod.DeclaredAccessibility != Accessibility.Public) throw new Exception("'T Current' must be public");
					getCurrentMethod = ResolveMethod(getCurrentMethod, method);
					writer.WriteLinePrefix($"{local.name} = {GetMethodFullName(getCurrentMethod)}(&{localExpressionResult.name});");
				}

				if (statement.Statement is BlockSyntax)
				{
					BlockStartCallback = WriteLocal;
					WriteFlowControlStatement(statement.Statement, ")");
				}
				else// force block style syntax
				{
					writer.WriteLine(')');
					writer.WriteLinePrefix('{');
					writer.AddTab();
					WriteLocal();
					WriteStatement(statement.Statement);
					writer.RemoveTab();
					writer.WriteLinePrefix('}');
				}
			}
			else
			{
				throw new NotSupportedException("Unsupported foreach collection kind: " + collectionType.Kind);
			}
		}

		private void SwitchStatement(SwitchStatementSyntax statement)
		{
			writer.WritePrefix("switch (");
			WriteExpression(statement.Expression);
			writer.WriteLine(')');
			writer.WriteLinePrefix('{');
			writer.AddTab();
			foreach (var section in statement.Sections)
				foreach (var label in section.Labels)
				{
					writer.WritePrefix(label.Keyword.Text);
					if (label is CaseSwitchLabelSyntax caseLabel)
					{
						writer.Write(' ');
						WriteExpression(caseLabel.Value);
					}
					else if (!(label is DefaultSwitchLabelSyntax))
					{
						throw new NotSupportedException("Unsupported switch label type: " + label.GetType());
					}
					writer.WriteLine(':');
					foreach (var sectionStatement in section.Statements)
					{
						if (!(sectionStatement is BlockSyntax)) writer.AddTab();
						WriteStatement(sectionStatement);
						if (!(sectionStatement is BlockSyntax)) writer.RemoveTab();
					}
				}
			writer.RemoveTab();
			writer.WriteLinePrefix('}');
		}

		private void BreakStatement(BreakStatementSyntax statement)
		{
			writer.WriteLinePrefix("break;");
		}

		private void ContinueStatement(ContinueStatementSyntax statement)
		{
			writer.WriteLinePrefix("continue;");
		}

		private void FixedStatement(FixedStatementSyntax statement)
		{
			WriteLocalDeclaration(statement.Declaration, ';' + Environment.NewLine, false, true);
			WriteStatement(statement.Statement);
		}

		private void WriteReturnStatement(ReturnStatementSyntax statement)
		{
			if (method.MethodKind == MethodKind.Destructor)
			{
				writer.WriteLinePrefix("/* protected return */");
				if (method.ContainingType.BaseType != null && FindDestructor(method.ContainingType.BaseType, out var destructor))
				{
					writer.WriteLinePrefix(GetMethodFullName(destructor) + "(self);");
				}
			}

			if (tryCatchNestingLevel == 0)
			{
				writer.WritePrefix("return");
				if (statement.Expression != null)
				{
					writer.Write(' ');
					WriteExpression(statement.Expression);
				}
				writer.WriteLine(';');
			}
			else
			{
				writer.WriteLinePrefix("/* protected return */");
				writer.WriteLinePrefix('{');
				writer.AddTab();

				string returnVarName = $"CS2X_RETURN_{tryCatchNestingLevel}";
				if (statement.Expression != null)
				{
					writer.WriteLinePrefix($"{GetTypeFullNameRef(method.ReturnType)} {returnVarName};");
					writer.WritePrefix($"{returnVarName} = ");
					WriteExpression(statement.Expression);
					writer.WriteLine(';');
				}

				writer.WriteLinePrefix($"memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));");
				if (statement.Expression != null) writer.WriteLinePrefix($"return {returnVarName};");
				else writer.WriteLinePrefix("return;");
				writer.RemoveTab();
				writer.WriteLinePrefix('}');
			}
		}

		private void StartTryBlock(out string jmpBuffLast, out string jmpBuff, out string isJmp)
		{
			// add special locals
			string name = $"CS2X_JMP_LAST_{tryCatchNestingLevel}";
			jmpBuffLast = name;
			jmpBuff = $"CS2X_JMP_{tryCatchNestingLevel}";
			isJmp = $"CS2X_IS_JMP_{tryCatchNestingLevel}";
			if (!instructionalBody.specialLocals.Exists(x => x.name == name))
			{
				instructionalBody.specialLocals.Add(new InstructionalBody.SpecialLocal(block, "jmp_buf", jmpBuffLast));
				instructionalBody.specialLocals.Add(new InstructionalBody.SpecialLocal(block, "jmp_buf", jmpBuff));
				instructionalBody.specialLocals.Add(new InstructionalBody.SpecialLocal(block, "int", isJmp));
			}
		}

		private void TryStatement(TryStatementSyntax statement)
		{
			if (statement.Finally != null) throw new NotSupportedException("Finally blocks not supported: " + statement.ToFullString());
			if (statement.Catches == null || statement.Catches.Count == 0) throw new NotSupportedException("No catach block after try: " + statement.ToFullString());

			// add special locals
			StartTryBlock(out string jmpBuffLast, out string jmpBuff, out string isJmp);
			++tryCatchNestingLevel;

			// write try
			writer.WriteLinePrefix("/* try */");
			writer.WriteLinePrefix($"memcpy({jmpBuffLast}, CS2X_ThreadExceptionJmpBuff, sizeof(jmp_buf));");
			writer.WriteLinePrefix($"{isJmp} = setjmp({jmpBuff});");
			writer.WriteLinePrefix($"if ({isJmp} == 0)");
			void WriteTryStart()
			{
				writer.WriteLinePrefix($"memcpy(CS2X_ThreadExceptionJmpBuff, {jmpBuff}, sizeof(jmp_buf));");
			}
			BlockStartCallback = WriteTryStart;
			WriteStatement(statement.Block);

			// write catches
			writer.WriteLinePrefix("else /* end try */");
			writer.WriteLinePrefix('{');
			writer.AddTab();
			writer.WriteLinePrefix($"memcpy(CS2X_ThreadExceptionJmpBuff, {jmpBuffLast}, sizeof(jmp_buf));");
			var first = statement.Catches.FirstOrDefault();
			foreach (var c in statement.Catches)
			{
				if (c.Filter != null) throw new NotSupportedException("Catch blocks do not support filters: " + c.ToFullString());
				if (c.Declaration != null)
				{
					var type = ResolveType(c.Declaration.Type);
					writer.WritePrefix();
					if (c != first) writer.Write("else ");
					writer.WriteLine($"if (CS2X_IsType((({GetTypeFullName(specialTypes.objectType)}*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &{GetRuntimeTypeObjFullName(type)})) /* catch */");
				}
				else
				{
					writer.WriteLinePrefix("/* empty catch */");
				}
				void WriteCatchStart()
				{
					if (c.Declaration != null)
					{
						var type = ResolveType(c.Declaration.Type);
						var local = TryAddLocal(c.Declaration.Identifier.ValueText, type);
						writer.WriteLinePrefix($"{local.name} = CS2X_ThreadExceptionObject;");
					}
					writer.WriteLinePrefix("CS2X_ThreadExceptionObject = 0;");
				}
				BlockStartCallback = WriteCatchStart;
				WriteStatement(c.Block);
			}
			writer.WriteLinePrefix("if (CS2X_ThreadExceptionObject != 0) longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw unhandled exception */");
			writer.RemoveTab();
			writer.WriteLinePrefix('}');
			writer.WriteLinePrefix($"memcpy(CS2X_ThreadExceptionJmpBuff, {jmpBuffLast}, sizeof(jmp_buf));");
			writer.WriteLinePrefix("/* end catch */");
			--tryCatchNestingLevel;
		}

		private void ThrowStatement(ThrowStatementSyntax statement)
		{
			writer.WritePrefix("CS2X_ThreadExceptionObject = ");
			WriteExpression(statement.Expression);
			writer.WriteLine(';');
			writer.WriteLinePrefix("longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */");
		}

		private void UsingStatement(UsingStatementSyntax statement)
		{
			if (statement.Expression != null) throw new NotSupportedException("using statement expression not supported: " + statement.ToFullString());

			// add special locals
			StartTryBlock(out string jmpBuffLast, out string jmpBuff, out string isJmp);
			++tryCatchNestingLevel;

			writer.WriteLinePrefix("/* using */");
			var locals = WriteLocalDeclaration(statement.Declaration, ";" + Environment.NewLine, false, false);
			writer.WriteLinePrefix($"memcpy({jmpBuffLast}, CS2X_ThreadExceptionJmpBuff, sizeof(jmp_buf));");
			writer.WriteLinePrefix($"{isJmp} = setjmp({jmpBuff});");
			writer.WritePrefix($"if ({isJmp} == 0)");
			if (statement.Statement is BlockSyntax)
			{
				writer.WriteLine();
				void WriteTryStart()
				{
					writer.WriteLinePrefix($"memcpy(CS2X_ThreadExceptionJmpBuff, {jmpBuff}, sizeof(jmp_buf));");
				}
				BlockStartCallback = WriteTryStart;
			}
			else
			{
				writer.WriteLine();
				writer.WriteLinePrefix('{');
				writer.AddTab();
				writer.WriteLinePrefix($"memcpy(CS2X_ThreadExceptionJmpBuff, {jmpBuff}, sizeof(jmp_buf));");
			}

			WriteStatement(statement.Statement);
			if (!(statement.Statement is BlockSyntax))
			{
				writer.RemoveTab();
				writer.WriteLinePrefix('}');
			}
			writer.WriteLinePrefix($"memcpy(CS2X_ThreadExceptionJmpBuff, {jmpBuffLast}, sizeof(jmp_buf));");
			foreach (var local in locals)
			{
				var disposeMethod = FindMethodByName(local.type, "Dispose");
				if (local.type.IsReferenceType) writer.WriteLinePrefix($"{GetMethodFullName(disposeMethod)}({local.name});");
				else writer.WriteLinePrefix($"{GetMethodFullName(disposeMethod)}(&{local.name});");
			}
			writer.WriteLinePrefix($"if ({isJmp} != 0) longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw caught exception */");
			writer.WriteLinePrefix("/* end-using */");
			--tryCatchNestingLevel;
		}

		private void EmptyStatement(EmptyStatementSyntax statement)
		{
			writer.WriteLine(';');
		}
	}
}
