#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

long long fatorial[100001];

long long fat(int x) {
    if (x == 0) {
        return 1;
    }
    return fat(x - 1) * x;
}

int main() {
    int n;
    int k = 0;

    cin >> n;

    for (int i = 0; i <= 9; i++) {
        fatorial[i] = fat(i);
    }
    
    for (int i = 9; i >= 0; i--) {
        while (n >= fatorial[i]) {
            n -= fatorial[i];
            k++;
        }
    }
    
    cout << k << endl;

    return 0;
}
