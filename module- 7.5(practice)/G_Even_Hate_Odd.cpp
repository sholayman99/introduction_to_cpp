#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int e_count = 0;
        int o_count = 0;
        int test_need = n / 2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                e_count++;
            }
            else
            {
                o_count++;
            }
        }
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            if (e_count > o_count)
            {
                cout << e_count - test_need << endl;
            }
            else if (e_count < o_count)
            {
                cout << o_count - test_need << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }

    return 0;
}