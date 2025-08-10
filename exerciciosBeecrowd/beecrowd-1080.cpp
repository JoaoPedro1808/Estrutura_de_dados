#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    int valores[100], maiorValor = 0, posicao = 0;
    int i;

    cin >> valores[0];
    maiorValor = valores[0];
    posicao = 0;

    for (i = 1; i < 100; i++) {
        cin >> valores[i];
        if (valores[i] > maiorValor) {
            maiorValor = valores[i];
            posicao = i;
        }
    }
    
    cout << maiorValor << endl;
    cout << posicao + 1 << endl;
    
    return 0;
}