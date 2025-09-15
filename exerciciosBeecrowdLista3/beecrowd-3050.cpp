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
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n < 2) {
            break;
        }

        int m1 = a[0] - 0;
        int m2 = 0;

        for (int i = 1; i < n; i++) {
           int d = a[i] + i + m1;
            
            if (d > m2) {
                m2 = d;
            }

            if ((a[i] - i > m1)) {
                m1 = a[i] - i;
            }
        }
        cout << m2 << endl;
    }
}