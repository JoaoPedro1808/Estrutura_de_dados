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
        vector <int> p;
        vector <int> im;

        for (int i = 0; i < n; i++) {
            int nums;
            cin >> nums;

            if (nums % 2 == 0) {
                p.push_back(nums);
            }
            else {
                im.push_back(nums);
            }
        }

        sort(p.begin(), p.end());
        sort(im.rbegin(), im.rend());

        for (int x : p) {
            cout << x << endl;
        }

        for (int x : im) {
            cout << x << endl;
        }
    }
}