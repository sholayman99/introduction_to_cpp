#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

   // sort(a,a+n); // descending sort  first start point then end point
    sort(a,a+n, greater<int>()); // ascending sort

    //it will print till the previous index of end point


     for (int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }


    return 0;
}