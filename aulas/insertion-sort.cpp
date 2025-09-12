#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int lista[5] = {3, 5, -1, 0, 2};

    for (int i = 0; i < size(lista); i++) {
        int x = lista[i];
        int j = i - 1;
        
        for (; j >= 0 && lista[j] > x; j--) {
            lista[j + 1] = lista[j];
        }
        lista[j + 1] = x;
    }

    for (int i = 0; i < size(lista); i++) {
        cout << lista[i] << endl;
    }
    
    return 0;
}