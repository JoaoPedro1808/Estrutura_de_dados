#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x[2001] = {0};
    
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        if (num >= 1 && num <= 2000) {
            x[num]++;
        }
    }

    for (int i = 1; i <= 2000; ++i) {
        if (x[i] > 0) {
            cout << i << " aparece " << x[i] << " vez(es)" << endl;
        }
    }

    return 0;
}