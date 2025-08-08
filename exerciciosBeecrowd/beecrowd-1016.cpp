#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int carroX = 60;
    int carroY = 90;
    int distancia;

    cin >> distancia;

    cout << fixed << setprecision(0) << (distancia * 2) << " minutos" << endl;

    return 0;
}