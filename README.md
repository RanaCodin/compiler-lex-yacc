# Mini Compiler (Lex & Yacc)

This project is a **mini compiler** for a simplified Pascal-like language.  
It performs **lexical analysis** and **syntax analysis** to verify whether the input program follows the correct language structure.

---

## Components

| File | Purpose |
|------|---------|
| `lexerR.l` | Defines token patterns and builds the **symbol table**. |
| `parserR.y` | Contains grammar rules and checks **syntax validity**. |
| `testfile1.txt / testfile2.txt / testfile3.txt` | Sample programs used for testing the compiler. |
| `lex.yy.c`, `parserR.tab.c`, `parserR.tab.h` | Auto-generated after running the compiler tools. |

---

## What the Compiler Does

### 1. **Lexical Analysis (Lex)**
- Reads the input file.
- Recognizes tokens such as:
  - Keywords (`program`, `var`, `begin`, `end`, etc.)
  - Identifiers
  - Numbers
  - Operators (`+ - * / = < > <= >= <>`)
  - Symbols (`; , : . ( ) [ ]`)
- Adds unique identifiers to a **symbol table**.
- Counts how many tokens appear in the program.

### 2. **Syntax Analysis (Yacc/Bison)**
- Uses grammar rules to ensure statements follow correct structure.
- Detects errors like:
  - Missing `;`
  - Incorrect block structure
  - Misplaced operators or keywords

---

## Output Behavior

| Case | Output |
|------|--------|
| Program matches the grammar | `Parsing successful.` |
| Program contains errors | Displays an **error message** with location |

At the end, the compiler also prints:
- **Token Count**
- **Symbol Table Contents**
