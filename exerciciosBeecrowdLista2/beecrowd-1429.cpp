#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

long long fatorial(int x) {
    if (x == 0) {
        return 1;
    }
    return fatorial(x - 1) * x;
}

int main() {
    int num;
    int d1, d2, d3, d4, d5;

    while (cin >> num) {
        if (num == 0) {
            break;
        }

        d1 = num % 10;
        num /= 10;

        d2 = num % 10;
        num /= 10;

        d3 = num % 10;
        num /= 10;

        d4 = num % 10;
        num /= 10;

        d5 = num % 10;

        cout << d1 * fatorial(1) + d2 * fatorial(2) + d3 * fatorial(3) + d4 * fatorial(4) + d5 * fatorial(5) << endl;
    }
    
    return 0;
}
