#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       int best_id = -1 , best_mark= -1;
       char best_name[101],best_section;
       
       for(int i=0 ; i<3 ; i++)
       {
         int id,mark;
         char name[101],section;

         cin >> id >>  name >> section >> mark ;

         if(i== 0 || mark > best_mark || (mark == best_mark && id < best_id))
         {
            best_id = id;
            best_mark = mark;
            best_section = section ;
            strcpy(best_name,name);
         }
       }
       cout << best_id << " " << best_name << " " << best_section << " " << best_mark << endl;
    }
    

    return 0;
}