#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        if (n == 0) {
            break;
        }

        vector <int> m(n);
        vector <int> l(n);

        for (int i = 0; i < n; i++) {
            cin >> m[i];
            cin >> l[i];
        }

        int pm = 0;
        int pl = 0;

        bool Pextra = false;
        for (int i = 0; i < n; i++) {
            pm += m[i];
            pl += l[i];
        }

        for (int i = 2; i < n; i++) {
            if (Pextra) {
                break;
            }

            bool ms = (m[i - 2] == m[i - 1] && m[i - 1] == m[i]);
            bool ls = (l[i - 2] == l[i - 1] && l[i - 1] == l[i]);

            if (ms && ls) {
                Pextra = true;
            }
            else if (ms) {
                pm += 30;
                Pextra = true;
            }
            else if (ls) {
                pl += 30;
                Pextra = true;
            }
        }

        if (pm == pl) {
            cout << "T" << endl;
        }
        else if (pm > pl) {
            cout << "M" << endl;
        }
        else if (pl > pm) {
            cout << "L" << endl;
        }
    }
}