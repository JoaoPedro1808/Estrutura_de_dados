#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
    int valores;
    int contagem[2001] = {0};

    cin >> valores;

    for (int i = 0; i < valores; ++i ) {
        int valor;
        cin >> valor;
        contagem[valor]++;
    }

    for (int i = 0; i < 2001; ++i) {
        if (contagem[i] > 0) {
            cout << i << " aparece " << contagem[i] << " vez(es)" << endl;
        }
    }

    return 0;
}