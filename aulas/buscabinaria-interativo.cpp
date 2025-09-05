#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <algorithm>

using namespace std;

int BB(int v[], int n, int x) {
    int l = 0;
    int r = n - 1;

    while (l <= r) {
        cout << "L = " << l << endl;
        cout << "R = " << r << endl;

        int m = (r + l) / 2;
        
        if (v[m] > x) {
            r = m - 1;
        }
        if (x > v[m]) {
            l = m + 1;
        }
        if (v[m] == x) {
            return m;
        }
    }

    return -1;
}

int main() {
    int lista[8];

        for (int i = 0; i < 8; i++) {
            cin >> lista[i];
        }

        sort(lista, lista + 8);

        int x;

        for (int i = 0; i < 8; i++) {
            while (cin >> x) {
                int res = BB(lista, 8, x);

                cout << res << endl;
            }
        }
}

