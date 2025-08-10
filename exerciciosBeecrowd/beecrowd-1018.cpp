#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int valor, notas[7] = {100, 50, 20, 10, 5, 2, 1};

    cin >> valor;
    cout << valor << endl;

    cout << valor / notas[0] << " nota(s) de R$ 100,00" << endl;
    valor %= notas[0];

    cout << valor / notas[1] << " nota(s) de R$ 50,00" << endl;
    valor %= notas[1];

    cout << valor / notas[2] << " nota(s) de R$ 20,00" << endl;
    valor %= notas[2];

    cout << valor / notas[3] << " nota(s) de R$ 10,00" << endl;
    valor %= notas[3];

    cout << valor / notas[4] << " nota(s) de R$ 5,00" << endl;
    valor %= notas[4];

    cout << valor / notas[5] << " nota(s) de R$ 2,00" << endl;
    valor %= notas[5];

    cout << valor / notas[6] << " nota(s) de R$ 1,00" << endl;

    return 0;
}