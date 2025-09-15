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
    int t;
    int n;

    while (cin >> t >> n) {
        long long pt = 0;

        if (t <= 0 && n <= 0) {
            break;
        }

        for (int i = 0; i < t; i++) {
            string nt;
            int p;

            cin >> nt >> p;

            pt += p;
        }
        
        long long e = (3 * n) - pt;

        cout << e << endl;
    }
}