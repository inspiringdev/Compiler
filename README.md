# List Manipulation Language (LML) Compiler

[![Flex](https://img.shields.io/badge/Flex-2.6+-blue.svg)](https://github.com/westes/flex)
[![Bison](https://img.shields.io/badge/Bison-3.8+-purple.svg)](https://www.gnu.org/software/bison/)
[![C++](https://img.shields.io/badge/C++-11-orange.svg)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

> **A natural language compiler that translates English-like list manipulation commands into executable C++ code**

---

## 📋 Overview

The **List Manipulation Language (LML) Compiler** is a complete compiler implementation built from scratch using **Flex** (lexical analyzer) and **Bison** (parser generator). It allows users to write intuitive, English-like commands to create and manipulate lists of integers, floating-point numbers, and strings — without knowing C++ syntax.

### ✨ Key Features

| Feature | Description |
|---------|-------------|
| **Natural Language Syntax** | Write commands like `SORT DESCENDING` or `KEEP ONLY EVEN` |
| **Multi-Type Support** | Lists of `int`, `double`, and `string` with automatic type handling |
| **Command Chaining** | Chain operations with `AND`, `THEN`, or `AND THEN` |
| **Rich Operations** | Sorting, filtering, statistics, manipulation, and more |
| **Direct Code Generation** | Produces ready-to-compile C++ code |
| **Case Insensitive** | `sort`, `SORT`, and `Sort` all work the same |

---

## 🚀 Quick Start

### Prerequisites

```bash
# Install Flex and Bison (Ubuntu/Debian)
sudo apt-get install flex bison build-essential

# Install Flex and Bison (macOS)
brew install flex bison

# Install Flex and Bison (Windows with WSL or Cygwin)
# Use package manager accordingly
```

### Building the Compiler

```bash
# Clone the repository
git clone https://github.com/yourusername/list-manipulation-compiler.git
cd list-manipulation-compiler

# Generate the scanner and parser
flex lexer.l
bison -d parser.y

# Compile
gcc lex.yy.c parser.tab.c -o lml_compiler -lfl

# Or use the provided Makefile
make
```

### Running the Compiler

```bash
# Run with input file
./lml_compiler < input.txt

# Or pipe commands directly
echo "MAKE LIST NUMBERS FROM USER" | ./lml_compiler
```

The compiler generates `output.cpp` which you can compile and run:

```bash
g++ output.cpp -o program
./program
```

---

## 📖 Language Guide

### 1. Creating Lists

```lisp
MAKE LIST FROM USER                    # Read ints from stdin
MAKE LIST NUMBERS FROM USER            # Same as above
MAKE LIST FLOATS FROM USER             # Read doubles from stdin
MAKE LIST STRINGS FROM USER            # Read strings from stdin
MAKE LIST FIXED 10 20 30 40 50         # Create list with fixed values
MAKE LIST NUMBERS                      # Use built-in default list
MAKE LIST FLOATS                       # Built-in float list
MAKE LIST STRINGS                      # Built-in string list
FILL LIST WITH NUMBER 7 REPEAT 10 TIMES  # Create list of ten 7's
COPY LIST                              # Copy current list to arr2
MERGE LIST WITH LIST                   # Merge arr2 into current list
```

### 2. Sorting

```lisp
SORT                    # Sort ascending
SORT ASC                # Sort ascending
SORT ASCENDING          # Sort ascending
SORT DESC               # Sort descending
SORT DESCENDING         # Sort descending
SORT BY ASC             # Alternative syntax
SORT BY DESC            # Alternative syntax
```

### 3. Removing Duplicates

```lisp
REMOVE DUPLICATES       # Remove duplicate values
KEEP UNIQUE             # Same as above
```

### 4. Filtering Elements

```lisp
FILTER EVEN                          # Keep only even numbers
KEEP ONLY EVEN                       # Same as above
WHERE EVEN                           # Same as above
FILTER ODD                           # Keep only odd numbers
FILTER POSITIVE                      # Keep only positive values
KEEP POSITIVE                        # Same as above
FILTER NEGATIVE                      # Keep only negative values
FILTER GREATER THAN 10               # Keep values > 10
KEEP GREATER THAN 10                 # Same as above
FILTER LESS THAN 5                   # Keep values < 5
FILTER EQUAL TO 42                   # Keep only value 42
FILTER EQUAL TO "apple"              # Keep only string "apple"
SLICE 2 TO 5                         # Keep indices 2 through 5
```

### 5. Statistics

```lisp
SUM                     # Display sum of all elements
AVERAGE                 # Display average
MAX                     # Display maximum value
MIN                     # Display minimum value
COUNT                   # Display number of elements
SIZE                    # Same as COUNT
FIND 42                 # Find index of value 42
CONTAINS 10             # Check if list contains 10
INDEX OF 7              # Display index of value 7
AT 3                    # Display element at index 3
COUNT EVEN              # Count even numbers
COUNT ODD               # Count odd numbers
COUNT POSITIVE          # Count positive values
COUNT NEGATIVE          # Count negative values
```

### 6. List Manipulation

```lisp
REVERSE                 # Reverse the list
SHUFFLE                 # Randomly shuffle elements
CLEAR                   # Empty the list
ADD 5                   # Append 5 to end
ADD "hello"             # Append string
APPEND 10 TO END        # Append to end
APPEND 20 TO FRONT      # Insert at front
INSERT 42 AT 3          # Insert 42 at index 3
POP                     # Remove last element
POP END                 # Remove last element
POP FRONT               # Remove first element
DELETE AT 2             # Delete element at index 2
DELETE 15               # Delete first occurrence of 15
REPLACE 10 WITH 20      # Replace all 10's with 20's
```

### 7. Printing

```lisp
PRINT                   # Print all elements
SHOW                    # Same as PRINT
DISPLAY                 # Same as PRINT
PRINT ONLY EVEN         # Print only even numbers
PRINT ONLY ODD          # Print only odd numbers
PRINT ONLY POSITIVE     # Print only positive values
PRINT ONLY NEGATIVE     # Print only negative values
PRINT ITEMS             # Print with indices (0: value)
DISPLAY ITEMS           # Same as above
DISPLAY SIZE            # Print list size
DISPLAY SUM             # Print sum
DISPLAY AVERAGE         # Print average
DISPLAY MAX             # Print maximum
DISPLAY MIN             # Print minimum
```

### 8. Command Chaining

```lisp
SORT AND THEN REMOVE DUPLICATES
FILTER EVEN THEN DISPLAY SUM
SORT DESC AND DISPLAY ITEMS
```

---

## 💡 Complete Example

### Input (`input.txt`)

```lisp
MAKE LIST FIXED 9 3 7 1 5 3 2 8 1
SORT DESCENDING
REMOVE DUPLICATES
FILTER GREATER THAN 3
DISPLAY SUM
DISPLAY AVERAGE
DISPLAY MAX
DISPLAY MIN
PRINT ITEMS
```

### Generated C++ (`output.cpp`)

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <random>
using namespace std;
int main(){
vector<int> arr = {9,3,7,1,5,3,2,8,1};
sort(arr.rbegin(),arr.rend());
sort(arr.begin(),arr.end());
arr.erase(unique(arr.begin(),arr.end()),arr.end());
arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x<=3;}),arr.end());
{ double _a=0; for(auto& v:arr)_a+=v; _a/=arr.size(); cout<<"Average: "<<_a<<"\n"; }
cout<<"Max: "<<*max_element(arr.begin(),arr.end())<<"\n";
cout<<"Min: "<<*min_element(arr.begin(),arr.end())<<"\n";
for(int i=0;i<(int)arr.size();i++) cout<<i<<": "<<arr[i]<<"\n";
return 0;
}
```

### Output

```
Sum: 29
Average: 7.25
Max: 9
Min: 5
0: 5
1: 7
2: 8
3: 9
```

---

## 🏗️ Project Structure

```
list-manipulation-compiler/
├── lexer.l              # Flex lexical analyzer specification
├── parser.y             # Bison parser grammar
├── parser.tab.c         # Generated parser (from bison)
├── parser.tab.h         # Generated parser header
├── lex.yy.c             # Generated scanner (from flex)
├── input.txt            # Example LML program
├── output.cpp           # Generated C++ code
├── Makefile             # Build automation
├── CC Project Report.docx  # Detailed project documentation
└── README.md            # This file
```

---

## 🔧 How It Works

### Architecture

```
┌─────────────┐     ┌─────────────┐     ┌─────────────┐     ┌─────────────┐
│   input.txt │────▶│    Flex     │────▶│    Bison    │────▶│  output.cpp │
│  (LML code) │     │   (Lexer)   │     │   (Parser)  │     │  (C++ code) │
└─────────────┘     └─────────────┘     └─────────────┘     └─────────────┘
                           │                    │                    │
                           │                    │                    │
                      Tokenizes          Syntax checks        Generates
                      input text         & validation        executable C++
```

### 1. Lexical Analysis (Flex)

The lexer (`lexer.l`) breaks input into tokens:
- Recognizes keywords (`SORT`, `FILTER`, `ADD`, etc.)
- Identifies numbers, floats, and strings
- Case-insensitive matching
- Supports synonyms (`SUM` and `TOTAL` produce same token)

### 2. Parsing (Bison)

The parser (`parser.y`) validates command structure:
- Grammar rules define valid command sequences
- Each matched rule triggers C++ code generation
- Tracks list type (int/double/string) for type-safe output
- Handles command chaining with `AND`/`THEN`

### 3. Code Generation

Direct syntax-directed translation:
- Writes C++ headers and `main()` function wrapper
- Translates each LML command to equivalent STL operations
- Automatically selects correct data types
- Outputs complete, compilable C++ program

---

## 📊 Supported Operations Summary

| Category | Operations |
|----------|------------|
| **Creation** | `MAKE LIST`, `FILL LIST`, `COPY`, `MERGE` |
| **Sorting** | `SORT`, `SORT ASC`, `SORT DESC` |
| **Deduplication** | `REMOVE DUPLICATES`, `KEEP UNIQUE` |
| **Filtering** | `FILTER`, `KEEP`, `WHERE` (even/odd/positive/negative/threshold) |
| **Statistics** | `SUM`, `AVERAGE`, `MAX`, `MIN`, `COUNT`, `SIZE` |
| **Search** | `FIND`, `CONTAINS`, `INDEX OF`, `AT` |
| **Manipulation** | `REVERSE`, `SHUFFLE`, `CLEAR`, `ADD`, `APPEND`, `INSERT`, `POP`, `DELETE`, `REPLACE` |
| **Slicing** | `SLICE from TO to` |
| **Printing** | `PRINT`, `SHOW`, `DISPLAY` (with filters and item indices) |

---

## 🎯 Design Highlights

### Natural English Syntax
Unlike traditional programming languages that use cryptic symbols, LML uses familiar English words, making it accessible to non-programmers.

### Synonym Support
Multiple ways to express the same operation:
- `SUM` / `TOTAL`
- `AVERAGE` / `MEAN` / `AVG`
- `REMOVE DUPLICATES` / `KEEP UNIQUE`
- `SHUFFLE` / `RANDOMIZE`

### Type Awareness
The compiler tracks whether you're working with integers, floats, or strings, and generates appropriate C++ code for each type.

### Error Prevention
Built-in checks prevent operations before list creation:
- `NEED_LIST` macro ensures list exists before manipulation
- Error comments in generated C++ instead of broken code

### Command Chaining
Write natural command sequences:
```lisp
SORT AND THEN REMOVE DUPLICATES AND THEN FILTER EVEN AND THEN DISPLAY
```

---

## 🧪 Testing

### Sample Test Cases

| Test Case | Input | Expected |
|-----------|-------|----------|
| Sort integers | `MAKE LIST FIXED 5 2 8 1` `SORT` | `1 2 5 8` |
| Remove duplicates | `MAKE LIST FIXED 1 2 2 3` `REMOVE DUPLICATES` | `1 2 3` |
| Filter even | `MAKE LIST FIXED 1 2 3 4` `FILTER EVEN` | `2 4` |
| String operations | `MAKE LIST STRINGS` `SORT` `PRINT` | Alphabetical order |

### Edge Cases
- Empty lists (graceful handling)
- Duplicate values (deduplication works)
- Large lists (uses efficient STL algorithms)
- Mixed types (type safety enforced)

---

## 📈 Performance

The compiler generates optimized C++ code that leverages the STL:

- Sorting: O(n log n) using `std::sort`
- Deduplication: O(n log n) with `std::unique`
- Filtering: O(n) with `std::remove_if`
- Search: O(n) with `std::find`

For a list of 100,000 elements, typical operations complete in milliseconds.

---

## 🔮 Future Enhancements

- [ ] Support for nested lists (list of lists)
- [ ] File I/O operations (read from/write to files)
- [ ] Mathematical operations (map, reduce, transform)
- [ ] Custom sorting with comparator functions
- [ ] Interactive REPL mode
- [ ] Python code generation backend
- [ ] Graphical user interface

---

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

---

## 📚 References

1. Levine, John R. *Flex & Bison*. O'Reilly Media, 2009.
2. The Flex Project. *Flex: The Fast Lexical Analyzer*. https://github.com/westes/flex
3. GNU Bison. *The Yacc-Compatible Parser Generator*. https://www.gnu.org/software/bison/

---

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.

---

## 👥 Authors

| Name | CMS ID |
|------|--------|
| **Yahya Iqbal** | 461442 |
| **Ubaid ur Rehman** | 470984 |

**Course**: Compiler Construction  
**Instructor**: Sir Safder  
**Department**: Computer Science

---

## 🙏 Acknowledgments

- Thanks to our instructor Sir Safder for guidance throughout the project
- The open-source community for Flex and Bison tools
- All contributors who provided feedback and suggestions

---

## 📧 Contact

Questions or issues? Open a GitHub issue or contact the authors.

---

## ⭐ Star History

If you find this project useful, please consider giving it a star on GitHub!

---

**Built with ❤️ using Flex and Bison**
