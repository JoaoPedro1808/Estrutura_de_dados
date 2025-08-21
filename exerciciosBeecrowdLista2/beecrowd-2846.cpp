#include <iostream>
#include <cmath>

using namespace std;

bool quadradoPerfeito(long long n) {
    if (n < 0) {
        return false;
    }
    long long r = round(sqrt(n));
    return (r * r == n);
}

bool ehFibonacci(int n) {
    if (n == 1) {
        return true;
    }
    return quadradoPerfeito(5LL * n * n + 4) || quadradoPerfeito(5LL * n * n - 4);
}

int main() {
    int k;
    cin >> k;

    int cf = 0;
    int num = 1;

    while (true) {
        if (!ehFibonacci(num)) {
            cf++;
            if (cf == k) {
                cout << num << endl;
                break;
            }
        }
        num++;
    }

    return 0;
}