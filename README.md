# Syntactic Analyzer - Compilers - UFBA

This project implements a **syntactic analyzer (parser)** for a simplified programming language, developed as part of the **MATA61 - Compilers** course at the **Federal University of Bahia (UFBA)**.  

# Lexical Analyzer - Compilers - UFBA

This project implements a **lexical analyzer** for a simplified programming language, developed as part of the **MATA61 - Compilers** course at the **Federal University of Bahia (UFBA)**.


---

## Structure and Functionality

The project integrates **Bison** and **Flex** to validate the grammatical structure of the source code and generate an **Syntax Tree**. The main files are:

- **`parser.y` (Bison)**: Defines the context-free grammar rules, precedence of operators, and the logic to build the tree nodes.
- **`scanner.l` (Flex)**: Tokenizes the input and passes semantic values to the parser.

---

## Supported Grammar Structures

The main file of the project is **`scanner_c.l`**, which includes:

- **C definitions** (token enumeration, symbol table, helper functions)  
- **Regular expression definitions** for pattern recognition  
- **Matching rules** that associate regex patterns with token types  
- **A main function (`main`)** for executing and displaying tokenized output

---

## Recognized Tokens


### Keywords
| Keyword | Description |
|---------|-------------|
| `se`, `senao` | Conditional structures |
| `enquanto`, `ate` | Loop structures |
| `inteiro`, `quebrado`, `caractere`, `texto`, `vazio` | Data types |
| `devolva` | Return statement |
| `imprima`, `receba` | Input/output operations |
| `e`, `ou`, `nao` | Logical operators |
| `fato` | Boolean constants |
| `serpente`| Vectors |

---

### Operators
| Operator | Token |
|-----------|--------|
| `==`, `!=`, `<`, `>`, `<=`, `>=` | Comparison operators |
| `+`, `-`, `*`, `/`, `=` | Arithmetic operators |

---

### Separators
| Symbol | Token |
|---------|--------|
| `;`, `,` | Delimiters |
| `(`, `)` | Parentheses |
| `{`, `}` | Block delimiters |

---

## Compilation and Execution

### Requirements
- **Flex** installed → `sudo apt install flex`
- **Bison** installed → `sudo apt install bison`
- **GCC** compiler → `sudo apt install build-essential`

### Build and Run

<<<<<<< HEAD
1. Generate the Parser from the Bison file:
   ```bash
   bison -d parser.y
2. Generate the C source from the Flex file:
   ```bash
   flex scanner_c.l
3. Compile the generated source:
   ```bash
   gcc lex.yy.c -o analyzer
4. Run the analyzer:
   ```bash
   ./analyzer

1. Generate the C source from the Flex file:
   ```bash
   flex scanner_c.l
2. Compile the generated source:
   ```bash
   gcc lex.yy.c -o analyzer
3. Run the analyzer:
   ```bash
   ./analyzer
4. Or run with the analyzer with a test file:
   ```bash
   ./analyzer teste.lang
---

## Documentation
The complete project report (in Portuguese) can be found below:
[Project Report (PDF)](./relatorio.pdf)

---

## Authors
Arthur Correia, Matheus Dias, and Pedro Marcos Estrela.


