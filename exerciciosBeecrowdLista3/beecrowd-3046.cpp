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
    if (n < 0) {
        break;
    }

    else {
        cout << ((n + 1) * (n + 2)) / 2 << endl;
    }
    }
    return 0;
}
