#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ss =s;
    reverse(s.begin(),s.end());

    if(s == ss)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}