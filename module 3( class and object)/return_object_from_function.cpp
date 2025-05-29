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
    }
};

// declaring a function with return type with object

Student fun()
{
    Student a(2, 5, 4.5);
    return a;
}

int main()
{
    Student obj = fun();
    cout << obj.roll << " " << obj.gpa << " " << obj.cls << endl;
    return 0;
}