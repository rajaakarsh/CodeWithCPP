
# 💻 CodeWithCPP

A structured C++ learning repository featuring progressive examples, practice problems, and VS Code configurations. This project covers core programming concepts, object-oriented principles, and memory management through practical code samples.
## 📁 Repository Structure


CodeWithCPP/
├── .vscode/                  # VS Code configuration
├── BASIC/                    # Core learning modules
│   ├── 2d-array/             # 2D array implementations
│   ├── Patterns/             # Pattern printing exercises
│   ├── STL/                  # Standard Template Library (vector, etc.)
│   ├── array/                # 1D array operations and questions
│   ├── basic-c/              # Core syntax & "Hello World"
│   ├── chararray/            # Character arrays
│   ├── classes-objects/      # Classes and objects basics
│   ├── controlflowstatemwnt/ # Switch cases and conditional logic
│   ├── functions/            # Function definitions, scope, and homework
│   ├── input/                # Input handling
│   ├── local-global-variable/# Variable scope demonstrations
│   ├── loops/                # Loop structures (while, do-while, continue)
│   ├── operators/            # Operators usage
│   ├── opps/                 # OOP concepts (Abstraction, Encapsulation, Inheritance, Polymorphism)
│   ├── passbyvalue-and-refrence/ # Parameter passing methods
│   ├── pointers/             # Pointers and dynamic memory allocation
│   ├── reference-variable/   # Reference variables
│   ├── string/               # String manipulation
│   ├── ternaryopertaors/     # Ternary operators
│   └── variable-datatypes/   # Variables, data types, and type casting
└── problems/                 # Practice challenges and questions

## 🚀 Getting Started

### Prerequisites
Install a C++ compiler and CMake:
- **Windows**: [MinGW-w64](https://www.mingw-w64.org/) + [CMake](https://cmake.org/)
- **macOS**: `xcode-select --install` + `brew install cmake`
- **Linux**: `sudo apt install build-essential cmake`

### Build Process
bash
git clone https://github.com/imaakarsh/CodeWithCPP.git
cd CodeWithCPP

# 🏗️ CMake Build

To build the entire project using CMake, run the following commands from the root directory:

bash
mkdir build && cd build
cmake ..
cmake --build .

# 🛠️ Manual Compilation

Alternatively, you can compile individual C++ source files directly using `g++`:

bash
g++ Code/basic-c/NamsteDuniya.cpp -o NamsteDuniya
./NamsteDuniya

## 🛠️ Key Features

- **Comprehensive C++ Basics**: From variables, data types, and operators to loops and control flow statements.
- **Data Structures**: Practical examples of 1D arrays, 2D arrays, character arrays, and strings.
- **Advanced Concepts**: Detailed coverage of pointers, dynamic memory allocation (DML), and reference variables.
- **Object-Oriented Programming (OOP)**: Dedicated modules for Encapsulation, Inheritance, and Polymorphism.
- **Practice Problems**: A collection of logic-building challenges including voting eligibility, day/month determination, and percentage calculation.
- **Modern Build Tooling**: CMake-based build system and pre-configured VS Code environment.
## 💡 Example Code

### Basic Syntax
cpp
// BASIC/basic-c/NamsteDuniya.cpp
#include <iostream>
int main() {
    std::cout << "Hello Duniya" << std::endl;
    return 0;
}


### Pattern Printing
cpp
// BASIC/Patterns/1.cpp
#include <iostream>
using namespace std;
void printPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}   
  
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);
}


### Pass by Value vs. Reference
cpp
// BASIC/passbyvalue-and-refrence/main.cpp
#include <iostream>
using namespace std;

void solve(string str) {
    cout << str << endl;
    str[0] = 'r';
    cout << str << endl;
}

int main() {
    string str = "aakarsh";
    cout << str << endl;
    solve(str);
    cout << str << endl;
    return 0;
}


### Object-Oriented Programming (Inheritance)
cpp
// BASIC/opps/Inheritance/main.cpp
#include <iostream>
using namespace std;

class Vehicles {
protected:
    string name;
    string modle;
    int noOfTyres;

public:
    Vehicles(string _name, string _modle, int _noOfTyres) {
        this->name = _name;
        this->modle = _modle;
        this->noOfTyres = _noOfTyres;
    }

    void start_engine() {
        cout << "Start The engine " << name << modle << endl;
    }

    ~Vehicles() {
        cout << "Im inside Vehicle" << endl;
    }
};

class Car : public Vehicles {
protected:
    int noOfdoors;
    string transmission;

public:
    Car(string _name, string _modle, int _noOfTyres, int _noOfdoors, string _transmission) 
        : Vehicles(_name, _modle, _noOfTyres) {
        this->noOfdoors = _noOfdoors;
        this->transmission = _transmission;
    }

    void startAC() {
        cout << "Ac has been strted of" << name << endl;
    }

    ~Car() {
        cout << "Im inside Car dtor" << endl;
    }
};


### Standard Template Library (STL) - 2D Vector
cpp
// BASIC/STL/vector.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 2D vector initialization (5 rows, 4 columns, initialized to 0)
    vector<vector<int>> arr(5, vector<int>(4, 0));
    int totalRows = arr.size();
    return 0;
}


### Practice Problems - Print Counting
cpp
// problems/questions/206. Print Counting from 1 to Nc.cpp
class Solution {
public:
    void printCounting(int n) {
        // Implement the loop logic to print numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            return i;
        }
    }
};

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch: `git checkout -b feature/your-topic`
3. Submit clean, well-commented C++ code
4. Follow C++ naming conventions

## 🔧 Troubleshooting

| Issue | Solution |
|-------|----------|
| `g++ not found` | Install compiler or add to PATH |
| `Permission denied` | `chmod +x filename` on Linux/macOS |
| Compilation errors | Specify standard: `g++ -std=c++17 file.cpp` |

## 📄 License

MIT License - see [LICENSE](LICENSE) for details

## 👤 Author

**Akarsh**  
GitHub: [@imaakarsh](https://github.com/imaakarsh)  
Star this repository to support C++ learning! ⭐