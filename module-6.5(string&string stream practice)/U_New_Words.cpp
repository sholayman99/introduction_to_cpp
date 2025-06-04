#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int e_count = 0, y_count = 0, g_count = 0, p_count = 0, t_count = 0;

    for(int i=0 ; i<s.size();i++)
    {
        if(s[i] == 'e' || s[i] == 'E')
        {
            e_count++ ;
        }
        else if(s[i] == 'y' || s[i] == 'Y'){
            y_count++;
        }
        else if(s[i] == 'g' || s[i] == 'G'){
            g_count++;
        }
        else if(s[i] == 'p' || s[i] == 'P'){
            p_count++;
        }
        else if(s[i] == 't' || s[i] == 'T'){
            t_count++;
        }
    }

   int res = e_count;
    if(g_count < res) res = g_count;
    if(y_count < res) res = y_count;
    if(p_count < res) res = p_count;
    if(t_count < res) res = t_count;

    cout << res;


    return 0;
}