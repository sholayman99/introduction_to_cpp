#include <bits/stdc++.h>
using namespace std;

// Define a Student class to store individual student details
class Student
{
public:
    string name; // Student's name
    int cls;     // Student's class (grade level)
    int marks;   // Student's marks
};

int main()
{
    int n; // Number of students
    cin >> n; // Read number of students

    // Declare an array of Student objects
    Student a[n];

    // Read student details: name, class, and marks
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].marks;
    }

    // Initialize a Student object to store the student with minimum marks
    Student mn;
    mn.marks = INT_MAX; // Set initial value to the maximum possible integer

    // Iterate through the array to find the student with the lowest marks
    for(int i = 0; i < n; i++)
    {
        if(a[i].marks < mn.marks)
        {
            mn = a[i]; // Update mn if a student with lower marks is found
        }
    }

    // Output the student with the lowest marks
    cout << mn.name << " " << mn.cls << " " << mn.marks;

    return 0;
}