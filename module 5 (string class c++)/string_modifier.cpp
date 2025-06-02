#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialize two strings
    string s = "Hello";
    string s2 = "World";

    // Step 2: Concatenate s2 to s using the += operator
    s += s2; // Now s = "HelloWorld"

    // Step 3: Append "Hi" to the end of s using append()
    s.append("Hi"); // Now s = "HelloWorldHi"

    // Step 4: Add a single character 'A' at the end of s
    s.push_back('A'); // Now s = "HelloWorldHiA"

    // Step 5: Remove the last character from s
    s.pop_back(); // 'A' is removed, now s = "HelloWorldHi"

    // Step 6: Create a new string and assign it to s
    string s3 = " Hello Bangladesh world"; // s3 is a string with spaces and words
    s = s3; // Now s = " Hello Bangladesh world"

    // Step 7: Erase all characters from index 6 onwards
    s.erase(6); // Removes everything after index 5, so s = " Hello"

    // Step 8: Assign a new string to s, replacing its entire content
    s.assign("Hello Dhaka Bangladesh"); // Now s = "Hello Dhaka Bangladesh"

    // Step 9: Erase 2 characters starting from index 6
    s.erase(6, 2); // Removes "Dh", so s = "Hello aka Bangladesh"

    // Step 10: Replace 3 characters starting from index 6 with "Dhaka"
    s.replace(6, 3, "Dhaka"); // Replaces "aka" with "Dhaka", now s = "Hello Dhaka Bangladesh"

    // Step 11: Insert "Sholayman" at index 6
    s.insert(6, "Sholayman"); // Inserts "Sholayman" before "Dhaka", now s = "Hello SholaymanDhaka Bangladesh"

    // Step 12: Output the final value of string s
    cout << s << endl; // Output: Hello SholaymanDhaka Bangladesh

    return 0;
}