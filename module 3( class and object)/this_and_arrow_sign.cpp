#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    // declaring a constructor
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;

        // if we want to use dot
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
    }
};

int main()
{
    Student a(2, 5, 4.0);
    Student b(1, 5, 4.5);

    cout << a.roll << " " << a.gpa << " " << a.cls << endl;
    cout << b.roll << " " << b.gpa << " " << b.cls << endl;

    return 0;
}

/**
 * What is this in class?
 --> This is a build in keyword in c++. It's basically a pointer
 * What is arrow sign?
  --> Because this is a  pointer for understanding that arrow
  sign comes up. We can't use dot unless we write this like
  a pointer(*this).
  * When we use this?
  --> if in a constructor variable and param are same on
  those cases we use this keyword like the example.
 */