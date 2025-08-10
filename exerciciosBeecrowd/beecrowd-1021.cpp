#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    double valor;

    cin >> valor;

    int valor_centavos = static_cast<int>(round(valor * 100));

    double notas[6] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0};
    double moedas[6] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int valor_nota_centavos = static_cast<int>(round(notas[i] * 100));
        int quantidade = valor_centavos / valor_nota_centavos;
        cout << quantidade << " nota(s) de R$ " << fixed << setprecision(2) << notas[i] << endl;
        valor_centavos %= valor_nota_centavos;
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int valor_moeda_centavos = static_cast<int>(round(moedas[i] * 100));
        int quantidade = valor_centavos / valor_moeda_centavos;
        cout << quantidade << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] << endl;
        valor_centavos %= valor_moeda_centavos;
    }

    return 0;
}