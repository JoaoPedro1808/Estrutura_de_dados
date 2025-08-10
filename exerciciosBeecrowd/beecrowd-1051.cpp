#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double salario;

    cin >> salario;

    if (0 < salario && salario <= 2000.00) {
        printf("Isento\n");
    }
    else if (2000.01 <= salario && salario <= 3000.00) {
        double imposto1 = (salario * 0.08) - 160.00;
        printf("R$ %.2f\n", imposto1);
    }
    else if (3000.01 <= salario && salario <= 4500.00) {
        double imposto2 = (salario * 0.18) - 460.00;
        printf("R$ %.2f\n", imposto2);
    }
    else if (salario > 4500.00) {
        double imposto3 = (salario *  0.28) - 910.00;
        printf("R$ %.2f\n", imposto3);
    }

    return 0;
}