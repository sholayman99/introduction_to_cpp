#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;

    // Take input from the user (reads one word — stops at space)
    cin >> s;

    // Print the character at index 1 (second character in the string)
    cout << s[1] << endl;

    // Print the character at index 3 using .at() (fourth character)
    // .at() also does bounds checking and will throw an error if index is invalid
    cout << s.at(3) << endl;

    // Print the last character using indexing (s.size() - 1 gives last index)
    cout << s[s.size() - 1] << endl;

    // Print the last character using .back() function (directly gives last character)
    cout << s.back() << endl;

    // Print the first character using .front() function (directly gives first character)
    cout << s.front() << endl;
    return 0;
}