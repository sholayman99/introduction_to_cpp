#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, t;
        cin.ignore();
        getline(cin, s);
        getline(cin, t);

        string res ="";
        int len1 = s.length();
        int len2 = t.length();
        int minLen = min(len1, len2);

        for(int i=0 ; i<minLen ; i++)
        {
            res += s[i];
            res += t[i];
        }
    }
    return 0;
}