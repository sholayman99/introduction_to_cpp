#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int balloons = 0;
        int count[26]; 
        for (int i = 0; i < 26; i++) {
            count[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            char ch = s[i];
            int index = ch - 'A';

            if (count[index] == 0) {
                balloons = balloons + 2;
                count[index] = 1;
            } else {
                balloons = balloons + 1;
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
