#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;      // Declare two integers for user input
    cin >> a >> b; // Input example: 10 20

    // Output the smaller of the two input values
    cout << "Min Value: " << min(a, b) << endl; // Expected output: 10

    // Output the larger of the two input values
    cout << "Max Value: " << max(a, b) << endl; // Expected output: 20

    /**
     * Note: The min and max functions can also operate on initializer lists
     * to find the smallest or largest value among multiple elements.
     */

    // Find and output the minimum value from a list of integers
    cout << "Min Value (List): " << min({1, 2, 3, 4, 5, 6, 7, 8}) << endl; // Expected output: 1

    // Find and output the maximum value from a list of integers
    cout << "Max Value (List): " << max({1, 2, 3, 4, 5, 6, 7}) << endl; // Expected output: 7

    // Swap value
    swap(a, b);
    cout << a << " " << b << endl;
}
