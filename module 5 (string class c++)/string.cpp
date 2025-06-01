#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Alice"; // create a string variable and assign a value

    cout << "Hello, " << name << "!" << endl;

    // Getting length of the string
    cout << "Your name has " << name.length() << " letters." << endl;

    // Accessing a single character
    cout << "The first letter of your name is: " << name[0] << endl;

    return 0;
}

/*
✅ Basic Concepts
-->A string can store multiple characters (e.g., "hello").
-->It belongs to the std namespace, so you either use string or add using namespace std;.
-->It supports many operations like concatenation, length checking, and character access.
*/