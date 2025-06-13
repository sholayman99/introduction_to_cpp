#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s,x;
        cin >> s >> x;
        string result ; 
        
       int size_s = s.size();
       int size_x = x.size();
       
        for(int i=0 ; i<size_s  ; i++)
        {
            bool match = true;
            for(int j=0 ; j< size_x;j++)
            {
                  if(i+size_x <= size_s)
                  {
                      if(s[i+j] != x[j])
                      {
                        match = false;
                        break;
                      }
                  }
                  else{
                        match = false;

                  }
            }
            if(match)
        {
            result += "#";
            i += size_x-1;
        }
        else{
            result += s[i];
        }
        }

        cout << result <<endl;
    }

    return 0;
}