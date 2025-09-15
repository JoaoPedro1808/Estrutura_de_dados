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
        string d;
        cin >> d;

        int p = 0;

        string s[] = {"N", "L", "S", "O"};

        for (char d1 : d) {
            if (d1 == 'D') {
                p = (p + 1) % 4;
            } 
            else if (d1 == 'E') {
                p = (p - 1 + 4) % 4;
            }
        }
        cout << s[p] << endl;
    }
}