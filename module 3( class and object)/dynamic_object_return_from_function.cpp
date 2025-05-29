#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
      int roll;
      int cls;
      double gpa;
    // declaring a constructor
     Student(int r, int c, double g)
     {
        roll = r;
        cls = c;
        gpa = g;
     }  
};

Student* fun()
{
   Student * p = new Student(1,5,4.5);
   return p; 
}

int main()
{
  
    Student * pp = new Student(2,3,4.95) ;
    cout << pp->roll << " " << pp->gpa << " " <<pp->cls << endl;

    return 0;
}