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
    int h1, m1;
    int h2, m2;

    while (cin >> h1 >> m1 >> h2 >> m2) {
        if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) {
            break;
        }

        int tm1 = (h1 * 60) + m1;
        int tm2 = (h2 * 60) + m2;

        int mt;

        if (tm1 < tm2) {
            mt = th2 - th1;
        }
        else {
            mt = (24 * 60 - tm1) + tm2; 
        }
        cout << mt << endl;
    }
}