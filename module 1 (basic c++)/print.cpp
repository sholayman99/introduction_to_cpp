#include <iostream> // Header for input/output streams

int main()
{
    // Print a welcome message
    std::cout << "Welcome to C++" << std::endl;

    // Declare an integer variable
    int n = 10;

    // Print the value of n
    std::cout << n << std::endl;

    // Declare multiple variables of different types
    int num = 1000;
    char c = 'C';
    double d = 26.50;

    // Print the variables without formatting
    std::cout << num << c << d << std::endl;

    // Print the variables with better formatting (new lines and space)
    std::cout << num << std::endl << c << " " << d << std::endl;

    // Print a message along with a variable
    std::cout << "My favorite number is: " << n << std::endl;

    return 0;
}

/**
 * Notes:
 * - <iostream> is the header file for input and output in C++.
 *   It stands for "input-output stream".
 * - Variables in C++ are declared similarly to C.
 * - Use `std::cout` to print and `std::endl` for a new line.
 */
