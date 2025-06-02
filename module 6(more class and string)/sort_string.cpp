#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    // Read a single word (no spaces) from standard input
    cin >> s;

    // Sort the characters in the string in ascending ASCII order
    sort(s.begin(), s.end());

    // Output the sorted string
    cout << s << endl;

    return 0;
}