#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    // Read a single word from user input (up to first space or newline)
    cin >> s;

    // Range-based for loop to iterate over each character in the string
    for (char c : s)
    {
        // Print each character on a new line
        cout << c << endl;
    }

    return 0;
}