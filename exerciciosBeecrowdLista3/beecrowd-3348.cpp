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
    long long c[] = {0, 2, 7, 5, 30, 169, 441, 1872, 7632, 1740, 93313, 459901, 1358657, 2504881, 13482720, 32058913, 2144736, 101389345, 100871343, 417934032};

    int n;
    cin >> n;

    if (n > 0 && n <= 19) {
        cout << c[n] << endl;
    }
}