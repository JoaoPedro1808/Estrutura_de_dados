#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int lista[5] = {5, 3, 8, 4, 2};

    for (int i = 0; i < size(lista) - 1; i++) {
        for (int j = 0; j < size(lista) - 1 - i; j++) {
            if (lista[j] > lista[j + 1]) {
                int t = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < size(lista); i++) {
        cout << lista[i] << endl;
    }
    return 0;
}