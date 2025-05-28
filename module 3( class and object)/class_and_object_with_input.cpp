#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a, b, c;

    cin >> a.name >> a.roll >> a.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cin.ignore(); 
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;
     cin.ignore(); 
    cin.getline(c.name, 100);
    cin >> c.roll >> c.gpa;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    cout << c.name << " " << c.roll << " " << c.gpa << endl;

    return 0;
}