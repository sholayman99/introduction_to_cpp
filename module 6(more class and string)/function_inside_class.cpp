#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int eng;
    int math;

    Student(string name, int roll, int eng, int math)
    {
        this->name = name;
        this->roll = roll;
        this->eng = eng;
        this->math = math;
    }

    void total_marks()
    {
        cout << " Total Marks of " << name << "=" << eng + math << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 1, 50, 60);
    sakib.total_marks();
    Student rakib("Rakib Ahmed", 2, 40, 60);
    rakib.total_marks();

    return 0;
}