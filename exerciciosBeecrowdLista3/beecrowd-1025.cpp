#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int BB(const vector<int>& v, int x) {
    int l = 0;
    int r = v.size() - 1;
    int resul = -1;

    while (l <= r) {
        int m = (r + l) / 2;
        
        if (v[m] < x) {
            l = m + 1;
        }
        else if (v[m] > x) {
            r = m - 1;
        }
        else {
            resul = m;
            r = m - 1;
        }
    }
    return resul;
}

int main() {
    int n, q;
    int cn = 1;

    while (cin >> n >> q) {
        if (n == 0 && q == 0) {
            break;
        }

        vector <int> mr(n);
        for (int i = 0; i < n; ++i) {
            cin >> mr[i];
        }

        sort(mr.begin(), mr.end());

        cout << "CASE# " << cn << ":" << endl;

        for (int i = 0; i < q; ++i) {
            int num;
            cin >> num;

            int ps = BB(mr, num);

            if (ps != -1) {
                cout << num << " found at " << ps + 1 << endl; 
            }
            else {
                cout << num << " not found" << endl;
            }
        }
        cn++;
    }
}