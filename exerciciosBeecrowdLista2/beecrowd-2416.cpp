#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    int p, d, l = 0;

    while (cin >> p >> d) {
        if (p == 0 && d == 0) {
            break;
        }

        for (int i = 0; i <= p; i += d) {
            l = p - i;
        }
        cout << l << endl;
    }

    return 0;
}