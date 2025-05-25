#include <iostream>
using namespace std;

int main()
{
    char s[100];
    char space_string[100];
    cin >> s ;
    cin.ignore(); //ignores one input 
    // Fpr taking string with space we use getLine()
    cin.getline(space_string,100);
    cout << s << " " << space_string;

   // string with space
}

/*
* Note: <bits/stdc++.h> covers all the header file in c++
*/