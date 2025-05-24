#include <iostream>
using namespace std;

int main()
{
    int x;
    while (cin >> x)
    {
        cout << x << endl;
    }
    return 0;
}


/**
 * When we do not know how many inputs are coming,
 * we can read until end-of-file (EOF) using a while loop:
 * 
 *     while (cin >> x)
 * 
 * All loop types in C++ are similar to those in C.
 */
