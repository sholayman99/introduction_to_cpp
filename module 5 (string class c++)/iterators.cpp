#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Step 1: Initialize a string
    string s = "Hello";

    // Step 2: Print the character pointed to by the begin() iterator (i.e., the first character)
    cout << *s.begin() << endl; // Output: H

    // Step 3: Print the character pointed to by the end() iterator (this is undefined behavior!)
    // s.end() points to *one past the last element* and should NOT be dereferenced directly.
    cout << *s.end() << endl; // ⚠️ Undefined behavior (may print garbage or crash)

    // Step 4: Print the last character using (s.end() - 1)
    cout << *(s.end() - 1) << endl; // Output: o (last character of "Hello")

    cout << endl;

    // Step 5: Loop using auto and iterators to print each character
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl; // Prints each character: H, e, l, l, o (on separate lines)
    }

    cout << endl;

    // Step 6: Same loop but with explicit iterator declaration
    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl; // Same output: H, e, l, l, o
    }

    return 0;
}