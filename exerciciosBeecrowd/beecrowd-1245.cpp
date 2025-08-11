#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        int esquerda[61] = {0};
        int direita[61] = {0};
        int count = 0;

        for (int i = 0; i < n; i++) {
            char l;
            int m;

            cin >> m >> l;
            
            if (l == 'E') {
                esquerda[m]++;
            }
            else if (l == 'D') {
                direita[m]++;
            }
        }

        for (int i = 30; i <= 60; i++) {
            count += min(esquerda[i], direita[i]);
        }
        
        cout << count << endl;
    }

    return 0;
}