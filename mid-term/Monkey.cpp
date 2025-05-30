#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100005];

    while (cin.getline(s, 100005))
    {
        char new_s[100005];
        int idx = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != ' ')
            {
                new_s[idx] = s[i];
                idx++;
            }
        }

        sort(new_s,new_s+idx);

        for (int i = 0; i < idx; i++) {
            cout << new_s[i];
        }
        cout << endl;
    }

    return 0;
}