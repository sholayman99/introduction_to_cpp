#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    double d = 12.234567;
    cout << fixed << setprecision(5) << d << endl;
    return 0;
}

/**
 * To control the number of digits displayed after the decimal point
 * for floating-point (e.g., double) values, we use `setprecision` 
 * from the <iomanip> header.
 * 
 * `fixed` ensures the number is shown in fixed-point notation, not scientific.
 * `setprecision(5)` limits the output to 5 digits after the decimal point.
 * 
 * <iomanip> stands for "input/output manipulation" and provides formatting tools.
 */
