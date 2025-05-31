#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    char symbol;
    int b;

    cin >> a >> symbol >> b;

    if(a>b && symbol == '>')
    {
        cout << "Right" <<endl;

    }
    else if(a <b && symbol == '<')
    {
        cout << "Right" <<endl;

    }

    else if( a==b && symbol == '='){
        cout << "Right" << endl;
    }

   else{
    cout << "Wrong" << endl;
   }  

    return 0;
}