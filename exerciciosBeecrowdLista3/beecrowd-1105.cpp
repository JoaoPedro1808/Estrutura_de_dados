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
    int b, n;

    while (cin >> b >> n) {
        if (b == 0 || n == 0) {
            break;
        }

        vector <int> r(b + 1);

        for (int i = 1; i <= b; i++) {
            cin >> r[i];
        }

        for (int i = 0; i < n; i++) {
            int d, c, v;

            cin >> d >> c >> v;

            r[d] -= v;
            r[c] += v;
        }

        int i;
        for (i = 1; i <= b; ++i) {
            if (r[i] < 0) {
                break;
            }
        }

        if (i <= b) {
            cout << "N" << endl;
        }
        else {
            cout << "S" << endl;
        }
    }
}