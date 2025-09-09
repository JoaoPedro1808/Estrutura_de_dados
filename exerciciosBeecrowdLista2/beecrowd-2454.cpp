#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    int p, r;

    while (cin >> p >> r) {
        if (p > 1 || r > 1) {
            break;
        }

        if (p == 0) {
            cout << "C" << endl;
        }
        else if (p == 1 && r == 0) {
            cout << "B" << endl;
        }
        else if (p == 1 && r == 1) {
            cout << "A" << endl;
        }
    }

    return 0;
}