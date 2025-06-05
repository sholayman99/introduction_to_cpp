#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
       string s;
       cin >> s;
       int firstHalf=0;
       int secHalf = 0;

     for(int i=0 ; i<3;i++)
     {
        firstHalf += s[i] - '0';
        secHalf += s[i+3] - '0';
     }

     if(firstHalf == secHalf)
     {
        cout << "YES" <<endl;
     }
     else{
         cout << "NO" <<endl;
     }
       
    }

    return 0;
}