#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
   // Read a single word from input (stops at space or newline)
    cin >> s;

    int x;

    // Read an integer from input
    cin >> x;

    // Clear the newline character left in the input buffer after reading x
    // Without this, getline() would read the leftover newline instead of the next full line
    cin.ignore();

    string s2;

    // Read a full line of text including spaces
    getline(cin, s2);

    // Output the values to verify correct input
    cout << s << endl;   // Prints the word stored in 's'
    cout << x << endl;   // Prints the integer value stored in 'x'
    cout << s2 << endl;  // Prints the full line stored in 's2'

    return 0;
}