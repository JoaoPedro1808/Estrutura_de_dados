#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int f, b, m;
    int f2, b2, m2;
    int c = 0, s;

    cin >> f >> b >> m;
    cin >> f2 >> b2 >> m2;

    if (f2 > f) {
        s = f2 - f;
        c = c + s; 
    }
    if (b2 > b) {
        s = b2 - b;
        c = c + s; 
    }
    if (m2 > m) {
        s = m2 - m;
        c = c + s;
    }

    cout << c << endl;
}