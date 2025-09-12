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

    for (int i = 0; i < size(lista); i++) {
        int min = i;
        
        for (int j = i + 1; j < size(lista); j++) {
            if (lista[j] < lista[min]) {
                min = j;
            }
        }

        int t = lista[i];
        lista[i] = lista[min];
        lista[min] = t;

    }

    for (int i = 0; i < size(lista); i++) {
        cout << lista[i] << endl;
    }
    return 0;
}