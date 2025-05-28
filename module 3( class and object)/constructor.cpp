#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
      int roll;
      int cls;
      int gpa;
    // declaring a constructor
     Student(int r, int c, double g)
     {
        roll = r;
        cls = c;
        gpa = g;
     }  
};

int main()
{
    Student a(2,5,4.0);
    Student b(1,5,4.5);
    
    cout << a.roll << " " << a.gpa << " " << a.cls << endl;
    cout << b.roll << " " << b.gpa << " " << b.cls << endl;

    return 0;
}

/**
 * What is constructor?
  --: Constructor is special type of function.
    Properties of constructor:
     1. It have to be inside class
     2. It doesn't have any return type
     3. Constructor and class name have to be same
     4. When creating a constructor it have to be called.
 */