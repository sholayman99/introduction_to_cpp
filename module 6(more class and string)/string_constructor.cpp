#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Default initialization with a string literal
    // Creates a string with content "Hello World"
    // string s = "Hello World";

    // 2. Construct from a C-style string
    // Creates a string with content "Hello"
    // string s("Hello");

    // 3. Construct from a C-style string with length limit
    // Initializes string with only the first 2 characters of "Hello"
    // Result: "He"
    // string s("Hello", 2);

    // 4. Construct from another string starting from index 3
    // s = "Hello", t = substring of s starting at index 3 ("lo")
    // string s = "Hello";
    // string t(s, 3); // "lo"
    // cout << t << endl;

    // 5. Fill constructor: create a string of 5 characters, all 'S'
    // Result: "SSSSS"
    string s(5, 'S');

    cout << s << endl;

    return 0;
}
