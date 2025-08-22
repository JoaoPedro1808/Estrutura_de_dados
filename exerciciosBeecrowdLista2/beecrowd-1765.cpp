#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int i = 0;
    
    while(true) {     
    cin >> n;
    
    if(n == 0) {
        break;
    }

    while (n--) {
        int m;
        double b1, b2;
        cin >> m >> b1 >> b2;
        i++;

        cout << "Size #" << i << ":" << endl;
        cout << "Ice cream used: " << m * ((b1 + b2) * 5 / 2)  << fixed << setprecision(2) << " cm2" << endl;
    }
    }
    
    return 0;
}