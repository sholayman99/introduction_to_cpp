#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // Read an entire line of input (including spaces)
    getline(cin, s); 
    // Example input: "Hello world from Dhaka"

    // Create a stringstream object from the input string
    stringstream ss(s);

    string word;

    // Use the stream extraction operator (>>) to extract words one by one
    // This works because stringstream behaves like cin, separating words by whitespace
    while (ss >> word)
    {
        // Print each word on a new line
        cout << word << endl;
    }

    return 0;
}