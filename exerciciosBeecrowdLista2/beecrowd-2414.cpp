#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    int n, m = 0;

    while (cin >> n && n != 0) {
        if (n > m) {
            m = n;
        }
    }

    cout << m << endl;

    return 0;
}