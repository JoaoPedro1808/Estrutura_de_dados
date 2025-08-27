#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int p2(int k) {
    int p2c[] = {6, 2, 4, 8};

    if (k == 0) {
        return 1;
    }

    return p2c[k % 4];
}

int main() {
    int n, inst = 1;

    while (cin >> n) {
        int e2 = 0, e5 = 0;
        int p = 1;

        for (int i = 1; i <= n; i++) {
            int temp = i;
            while (temp % 2 == 0) {
                temp /= 2;
                e2++;
            }
            while (temp % 5 == 0) {
                temp /= 5;
                e5++;
            }
            p = (p * temp) % 10;
        }

        int d = e2 - e5;
        if (d > 0) {
            p = (p * p2(diff)) % 10;
        }

        cout << "Instancia " << inst++ << endl;
        cout << p << endl << endl;
    }
    return 0;
}