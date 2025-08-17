#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int tempo, velocidade;

    cin >> tempo;
    cin >> velocidade;

    printf("%.3f\n", (tempo * velocidade) /  12.0);

    return 0;
}