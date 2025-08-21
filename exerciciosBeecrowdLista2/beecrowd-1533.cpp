#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
    int n;
    int l[1000];

    while (cin >> n && n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }

        int max = -1;
        int max2 = -1;

        for (int i = 0; i < n; i++) {
            if (l[i] > max) {
                max2 = max;
                max = l[i];
            } else if (l[i] > max2 && l[i] < max) {
                max2 = l[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (l[i] == max2) {
                cout << i + 1 << endl;
                break;
            }
        }    
    }
    return 0;
}