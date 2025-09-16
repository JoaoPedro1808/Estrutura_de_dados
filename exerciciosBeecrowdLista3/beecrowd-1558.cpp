#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        bool r = false;
        for (int a = 0; a * a <= n; ++a) {
            int b = n - (a * a);
            int b2 = sqrt(b);

            if (b2 * b2 == b) {
                r = true;
                break;
            }
        }
        if (r == true) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}