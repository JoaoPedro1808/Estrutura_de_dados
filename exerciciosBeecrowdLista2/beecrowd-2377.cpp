#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    int l, d, k, p;

    while (cin >> l >> d >> k >> p) {
        int lk = l * k;
        int ldp = (l / d) * p;

        cout << lk + ldp << endl;
    }

    return 0;
}