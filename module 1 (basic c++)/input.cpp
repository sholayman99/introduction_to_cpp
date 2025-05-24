#include <iostream>
// Using this line allows us to avoid prefixing everything with 'std::'
using namespace std;

int main()
{
    int x;
    // Read an integer from input
    cin >> x;

    // Print the integer
    cout << x << endl;

    // Declare more variables
    char c;
    double d;

    // Read a character and a double from input
    cin >> c >> d;

    // Print the character and double
    cout << c << " " << d << endl;

    // Demonstrate how characters map to ASCII values
    char a = 'a';
    char A = 'A';

    int val_of_a = a;
    int val_of_A = A;

    // Print ASCII values of 'a' and 'A'
    cout << val_of_a << " " << val_of_A << endl;

    // You can also use type casting to get the ASCII value
    char f = 'F';
    cout << (int)f << endl; // Output: 70

    // And convert an ASCII value back to its character
    int ascii = 70;
    cout << (char)ascii << endl; // Output: F

    return 0;
}

/**
 * Notes:
 * - Use `cin >>` for input in C++.
 * - Characters in C++ have underlying ASCII values, which can be viewed
 *   using type casting (e.g., `(int)charVar`) or assigned directly to an `int`.
 * - Similarly, you can convert an ASCII value to its corresponding character
 *   using `(char)intValue`.
 */
