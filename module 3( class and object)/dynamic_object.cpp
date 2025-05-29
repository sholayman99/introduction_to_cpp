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
    Student b(1,5,4.5);
    Student* p = &b;
    return p;
}

int main()
{
    Student a(2,5,4.0);
    Student * pp = new Student(2,3,4.95) ;
    
    cout << a.roll << " " << a.gpa << " " << a.cls << endl;
    cout << pp->roll << " " << pp->gpa << " " <<pp->cls << endl;

    return 0;
}