#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
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
    int lista[8] = {-1, 2, 9, 25, 35, 50, 60, 26};

    sort(lista, lista + 8);
    
        for (int i = 0; i < 8; i++) {
            int x;

            while (cin >> x) {
                int res = BB(lista, 8, x);

                cout << res << endl;
            }
        }
}