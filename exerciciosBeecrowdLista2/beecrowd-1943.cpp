#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        if (n == 0) {
            break;
        }
        else if (n == 1) {
            cout << "Top 1" << endl;
        }
        else if (n == 2 || n == 3) {
            cout << "Top 3" << endl;
        }
        else if (n == 4 || n == 5) {
            cout << "Top 5" << endl;
        }
        else if (n >= 6 && n <= 10) {
            cout << "Top 10" << endl;
        }
        else if (n >= 11 && n <= 25) {
            cout << "Top 25" << endl;
        }
        else if (n >= 26 && n <= 50) {
            cout << "Top 50" << endl;
        }
        else if (n >= 51 && n <= 100) {
            cout << "Top 100" << endl;
        }
    }
    
    return 0;
}