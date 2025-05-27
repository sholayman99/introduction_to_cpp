#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if((int)x >= 65 && int(x) <= 122)
    {
       if((int)x >= 65 && (int)x <= 90)
       {
         cout << "ALPHA" << endl << "IS CAPITAL";
       }
       else{
         cout << "ALPHA" << endl << "IS SMALL";
       }
    }
    else{
        cout << "IS DIGIT";
    }

    return 0;
}