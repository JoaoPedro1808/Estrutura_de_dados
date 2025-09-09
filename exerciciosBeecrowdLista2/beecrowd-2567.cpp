#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        vector<int> idades(n);

        for (int i = 0; i < n; i++) {
            cin >> idades[i];
        }

        sort(idades.begin(), idades.end());

        int t = 0;
        for (int i = 0; i < n / 2; i++) {
            t += idades[n - 1 - i] - idades[i];
        }

    cout << t << endl;
    }

    return 0;
}