#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    
    cin >>s ;

    string result ;

    for (int i=0 ; i<s.size();)
    {
        if(i+4 < s.size() && s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T')
        {
            result += ' ';
            i += 5; 
        }
        else{
             result += s[i];
            i++;
        }
    }

    cout << result;

    return 0;
}
