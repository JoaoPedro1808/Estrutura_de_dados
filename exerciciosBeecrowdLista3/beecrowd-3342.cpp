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
    int n;

    while (cin >> n) {
        int b, p;

        if (n % 2 == 0) {
            cout << (n * n) / 2 << " casas brancas" << " e " << (n * n) / 2 << " casas pretas" << endl;
        }
        else {
            cout << (n * n + 1) / 2 << " casas brancas" << " e " << (n * n - 1) / 2 << " casas pretas" << endl;
        }
    }
}