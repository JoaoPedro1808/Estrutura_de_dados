#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    int c0 = 0, c1 = 0; 
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;

        if (m == 0) {
            c0++;
        }
        else if (m == 1) {
            c1++;
        }
    }
        if (c0 > c1) {
            cout << "Y" << endl;
        }
        else if (c1 > c0) {
            cout << "N" << endl;
        } 
        else if (c0 == c1) {
            cout << "N" << endl;
        }
    return 0;
}