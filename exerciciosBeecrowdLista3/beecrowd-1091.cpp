#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int k;

    while (cin >> k) {
        int n, m;
        cin >> n >> m;

        if (k == 0) {
            break;
        }

        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;

            if (x == n || y == m) {
                cout << "divisa" << endl;
            }
            else if (x > n && y > m) {
                cout << "NE" << endl;
            }
            else if (x < n && y > m) {
                cout << "NO" << endl;
            }
            else if (x < n && y < m) {
                cout << "SO" << endl;
            }
            else if (x > n && y < m) {
                cout << "SE" << endl;
            }
        }
    }

    return 0;
}