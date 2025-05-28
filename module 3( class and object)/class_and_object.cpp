#include <bits/stdc++.h>
using namespace std;

//declaring a class
class Student
{
    public:
     char name[100];
     int roll;
     double gpa;

};

int main()
{
    // declaring object  
    Student a;
     a.roll = 10;
     a.gpa= 3.96;

     // We directly can' insert a value like this in character array.
     // Solution:
     char temp[100] = "Sholayman";
     strcpy(a.name ,temp);

     cout << a.name << " " << a.roll << " " << a.gpa << endl;

    return 0;
}

/**
 * What is class?
 --: Class is a user defined data type. Class size defined by it defined
  variable's size.

  * What is object?
  --: Object is a user defined variable.

 */