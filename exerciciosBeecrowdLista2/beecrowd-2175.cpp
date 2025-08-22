#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    double o, b, i;

    while (cin >> o >> b >> i) {
        if (o < b && o < i) {
            cout << "Otavio" << endl;
        } 
        else if (b < o && b < i) {
            cout << "Bruno" << endl;
        } 
        else if (i < o && i < b) {
            cout << "Ian" << endl;
        } 
        else {
            cout << "Empate" << endl;
        }
    }

    return 0;
}