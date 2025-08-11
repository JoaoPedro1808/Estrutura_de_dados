#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
    int a;

    while (cin >> a) {
        if (a < 0 || a > 180) {
            break;
        }

        bool valido = false;

        for (int t = 0; t < 720; ++t) {
            int pos_mins = t % 60;
            
            int pos_horas = (t / 12) % 60;

            int diferenca_marcas = abs(pos_mins - pos_horas);

            int angulo = diferenca_marcas * 6;
            
            int angulo_minimo = min(angulo, 360 - angulo);
            
            if (angulo_minimo == a) {
                valido = true;
                break;
            }
        }

        if (valido) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    
    return 0;
}