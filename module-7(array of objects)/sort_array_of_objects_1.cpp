#include <bits/stdc++.h>
using namespace std;

// Definition of the Student class
class Student
{
public:
    string name; // Student's name
    int cls;     // Student's class (grade level)
    int marks;   // Student's marks
};

// Custom comparator function to sort students based on their marks in ascending order
bool cmp(Student l, Student r)
{
    // Return true if the left student's marks are less than the right student's
    // This will ensure sorting in increasing order of marks
    return l.marks < r.marks;
}

int main()
{
    int n;    // Number of students
    cin >> n; // Read the number of students

    Student a[n]; // Declare an array of Student objects of size n

    // Input student details: name, class, and marks
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].marks;
    }

    // Sort the array of students using the custom comparator
    sort(a, a + n, cmp);

    // Output the sorted student list
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].marks << endl;
    }

    return 0;
}