#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int c = 1;

    while (cin >> n) {
        if (n == 0) {
            break;
        }

        vector <int>moradores(n);
        vector <int>consumo(n);

        double ct = 0;
        int mt = 0;

        for (int i = 0; i < n; i++) {
            cin >> moradores[i] >> consumo[i];
            mt += moradores[i];
            ct += consumo[i]; 
        }

        int mf = moradores.size();
        for (int i = 0; i < mf; i++) {
            int c1 = moradores[i];
            int c2 = consumo[i];

            int cc2 = floor((double)c2 / c1);
            int j = i - 1;

            while (j >= 0 && floor((double)consumo[j] / moradores[j]) > cc2) {
                consumo[j + 1] = consumo[j];
                moradores[j + 1] = moradores[j];
                j--;
            }

            moradores[j + 1] = c1;
            consumo[j + 1] = c2;
        }
        cout << "Cidade# " << c++ << ":" << endl;
        for (int i = 0; i < moradores.size(); i++) {
            int consumo_por_pessoa = floor((double)consumo[i] / moradores[i]);
            cout << moradores[i] << "-" << consumo_por_pessoa;

            if (i < moradores.size() - 1) {
                cout << " ";    
            } else {
                cout << endl;
            }
        }
        double cm = ct / mt;
        cout << "Consumo medio: " << fixed << setprecision(2) << cm << " m3." << endl;
    }
}