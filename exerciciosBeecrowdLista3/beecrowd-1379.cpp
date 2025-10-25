#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

int main() {
    int a, b, c;

    while (cin >> a >> b) {
        if (a == 0 && b ==0) {
            break;
        }
        c = 2 * a - b;
        cout << c << endl;
    } 

    return 0;
}