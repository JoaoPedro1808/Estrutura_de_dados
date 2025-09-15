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
    string n;

    while (cin >> n) {
        if (n.length() > 20) {
            break;
        }


        if (n.length() >= 10) {
            cout << "palavrao" << endl;
        }
        else {
            cout << "palavrinha" << endl;
        }
    }
}