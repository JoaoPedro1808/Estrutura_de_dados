#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

long long fibonot[100001];

int fibo(int x) {
    fibonot[x] = fibo(x - 1) + fibo(x - 2);
    return fibonot[x];
}

int main() {
    int k;

    while (cin >> k) {
        cout << fibo(k) << endl;
    }
}