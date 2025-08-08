#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char vendedor[100];
    double salario, totaldevendas;

    cin >> vendedor;
    cin >> salario;
    cin >> totaldevendas;

    printf("TOTAL = R$ %.2f\n", salario + (totaldevendas * 0.15));

    return 0;
}