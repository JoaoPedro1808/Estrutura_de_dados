#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    int x, y;

    while (cin >> x >> y) {
        if (x >= 0 && x <= 432 && y >= 0 && y <= 468) {
            cout << "dentro" << endl;
        }
        else {
            cout << "fora" << endl;
        }
    }
    return 0;
}