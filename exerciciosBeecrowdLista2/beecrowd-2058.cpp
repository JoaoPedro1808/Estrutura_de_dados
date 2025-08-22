#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        if (n < 3) {
            break;
        }
        else {
            cout << n - 2 << endl;
        }
    }
    return 0;
}