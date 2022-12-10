Code with Mosh C++ Tutorial

Console Applications written in C++ to review basic to intermediate concepts.

High performance and efficiency
Used for performance-critical application (video games, servers, operating systems, etc.)

Related/derivative languages (Java, JS etc)

C++ programs begin with a main() function as the starting point.

Compiling Code - C++ to Machine Code.
Compiling produces an executable specific to the OS the compiler is designed for.
Machine code is OS specific therefore C++ is compiled by a specific compiler.
Running Code -

Features:
Case-Sensitivity
Standard Library

Key Concepts:
Variables - A variable is the NAME of the LOCATION in memory. Since the VALUE stored can change it is referred to as a variable.
Declaration - Statement of data type and variable name.
Initialization - Statement of variable value.
Always initialize variables before using them or the program will provide random information retrieved from memory.
'std' - Statement telling the OS what to do. Prints to the console/screen.
'cout' short for 'character out' and stands for Standard output Stream
'<<' - Stream Insertion Operator. Statements can be chained with multiple '<<' operators
'using namespace std' allows for all objects in the std namespace to be accessed.
'cin' reads value from input with stream insertion operator '>>'. 'cin' stands for 'character in'
'#include cmath'- c++ Math Library.
Standard template Library - library of functions/algorithms
'endl' - End of line
Defining std - 'using namespace std' defines std and eliminates repetition of 'std::'

Statically Typed vs Dynamically Typed
When declaring a variable the type must be specified and cannot change throughout the lifecycle of the program

C++, Java C# (Data type must be specified at declaration and cannot change throughout the lifecycle of the program)
vs Python, JavaScript, Ruby (type is determined when the variable is initialised to a value and the type can change over the lifecyle of the program)

Accuracy:
FLOAT TYPE*** Can result in loss of accuracy so use DOUBLE instead.
Append 'F' (or 'f') to Float Values or the compiler may treat it as a Double and cause Data Loss
Append 'L' to a long so the compiler does not treat it as an integer.
'auto' Keyword - shortens code and makes it more consistent. Helpful with more complex types. The compiler will infer the data type of the variable.

Brace initialization - Remove assignment operator and place value of variable in brackets{}. An empty brace initializer would set the value to zero:
int emptyBracketsEqualZero = 0; is also int emptyBracketsEqualZero {}
Both equals zero.

'Unsigned' - an unsigned number cannot be negative but its not a great feature to use. Can cause issues with data quality.

NARROWING - When declaring a larger value with a smaller type
i.e. narrowing an int (4 BYTES) of one million to a short(2 BYTES)

WARNING to use 'Null Pointer' - To Be Explained

#include <iomanip> library of functions for manipulating streams
setw(numberOfCharacters) - reserves specified number of characters

OVERFLOWING - If a number is too large for a data type it overflows to the next number which will start with the LOWERST possible number suitable for the type (i.e int two billion whatever plus one will be negative two billion whatever)
UNDERFLOW - If number is too small it overflows to the largest acceptable number (i.e. int negative two billion whatever  minus one will be positive two billion whatever)

Formatting Booleans - boolalpha will convert 0/1 to false/true values. Otherwise compiler only recognizes/returns truthy/falsy values 0/1.

CASTING
Smaller to Larger - When casting smaller values to larger data types (i.e. short to int) the value is automatically cast/converted to the larger type by the compiler.
Larger to Smaller - When storing Larger values in a smaller data type the program must explicitly cast the value.
C-Style Casting - Prefix the variable with the intended data type i.e. int actuallyADouble = (double)1.2;
Static_cast operator - Used for C++ since its safer for data loss when compiling. You will know ahead of time if there will be a compile-time error. i.e double onePointOne = 1.1; static_cast<F>(onePointOne);

DECISION MAKING

Casting/Converting in mathematical operations - The compiler with cast smaller data types to larger more accurate data types when comparing two different data types.

The Conditional Operation - Basically a ternary operator
int value = (number > lowerNumber) ? thisValue : notThisValue;

PASSING ARGUMENTS BY VALUE OR REFERENCE
Arguments are passed by (copy of the)VALUE by default NOT by REFERENCE(to the actual value)
To pass arguments by Reference:
double argumentValue = .01
double functionName(double& argumentValue){
    argumentValue += 1.0 //Manipulates/reassigns the value
    cout << argumentValue; //prints (1.01) the argument passed by value
}
cout << argumentValue; //prints (1.01) the same value as the function since it has been altered/updated/reassigned.
VERY HELPFUL for passing large amounts of data.

FUNCTIONS AND SCOPE

Function DECLARATION (function Prototype) vs Function DEFINITION(Implementation)
void greet(string name); //Function declaration/prototype will allow use of function
vs
void greet(string name){
    cout >> "hello " << name;
}
Definition of the function provides the actual function but does not define or have impact on the scope of the function.


ORGANIZING FILES IN FOLDERS
Steps:
1. Add new directory inside project and name it 'utils'
2. Add two files to 'utils' folder
    File #1: Header File (<function name>.hpp) - This will hold the function declaration.
    File #2: Implementation File (<function name>.cp) - Holds Function definition.
3. In main.cpp add the path to the header file:
    #include "utils/greet.hpp"
4. Prevent build issues:
    In the header file write instructions for the build tool to use the file only once.
    The first line uses the directive #ifndef_<CONST> "if not defined" to name a constant
    i.e.
    #ifndef UTILS_NAMEFORCONSTANT
    The second line uses the #define directive to define the constant.
    i.e.
    #define UTILS_<NAMEFORCONSTANT>
    The final line uses the #endif directive.
5. Additional Steps for CLion:
    Avoid the following build error: "symbol(s) not found for architecture x86_64"
    Build tool: CMakeLists.txt is a text file that defines how the project will be built:
        The minimum version of CMake required
        The definition of the project
        The version of C++ used
        add_executable(file file file...) - The source files used in the build process***
    If a source file (not the headerfile) is missing from the add_executable() you will get the error defined above.


    What happens when we build the project:
        The build tool will recognize the header file when it is first referenced in main.cpp.
        The build tool will read the header file and recognize that the constant on the first line is not defined.
         The build tool will move on to the second line where the constant is defined. The contents of the file (the function declaration) will be included in the build process until the last line, the #endif directive is reached.
        The second time the header file is included/referenced somewhere other than the main.cpp file the build process will recognize that the constant on the first line of the header file has been defined previously. The rest of the header file (the definition on the constant, the function declaration and #endif directive will not be executed.







