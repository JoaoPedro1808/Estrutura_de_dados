#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int nc;
    cin >> nc;

    for (int i = 1; i <= nc; i++) {
        int n, k;
        cin >> n >> k;

        int s = 0;
        for (int j = 1; j <= n; j++) {
            s = (s + k) % j;
        }

        cout << "Case " << i << ": " << s + 1 << endl;
    }

    return 0;
}