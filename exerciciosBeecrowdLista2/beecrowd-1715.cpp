#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
    int n, m;
    int j = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int g;
        int g0 = 0;

        for (int k = 0; k < m; k++) {
            cin >> g;

            if (g == 0) {
                g0++;
            }
        }

          if (g0 == 0) {
            j++;
        }
    }

   cout << j << endl;

   return 0;
}