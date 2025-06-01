#include <bits/stdc++.h>  
using namespace std;      

int main()
{
    // Declare and initialize a string with "Hello World"
    string s = "Hello World";

    // Print the number of characters in the string (should be 11)
    cout << s.size() << endl;

    // Print the maximum number of characters the string can hold
    // (This is a large number and depends on the system and compiler)
    cout << s.max_size() << endl;

    // Print the current capacity of the string (memory allocated for characters)
    // This may be equal to or greater than the actual size
    cout << s.capacity() << endl;

    // Resize the string to 15 characters.
    // Since the original string is shorter (11 characters),
    // it adds 4 'x' characters to the end: "Hello Worldxxxx"
    s.resize(15, 'x');  // Note: 'x' is a character, not a string

    // Clear the string — removes all characters, making it an empty string
    s.clear();

    // Check if the string is empty after clearing it.
    // Returns 1 (true) because the string is now empty
    cout << s.empty() << endl;

    return 0;  // End of program
}
