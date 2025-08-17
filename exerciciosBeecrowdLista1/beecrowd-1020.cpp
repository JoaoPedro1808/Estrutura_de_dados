#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int dias;

    cin >> dias;

    int anos = dias / 365;
    dias %= 365;
    
    int meses = dias / 30;
    dias %= 30;
    
    printf("%d ano(s)\n", anos);
    printf("%d mese(s)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}