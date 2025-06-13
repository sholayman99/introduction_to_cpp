#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Students a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    for (int i = 0, j = n - 1; i < j ; i++, j--)
    {
        char temp;
        temp = a[i].s;
        a[i].s = a[j].s;
        a[j].s = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}