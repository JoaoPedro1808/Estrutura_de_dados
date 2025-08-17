#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a,b;
    double valorporhora;

    cin >> a;
    cin >> b;
    cin >> valorporhora;

    double salario = b * valorporhora;

    cout << "NUMBER = " << a << endl;
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}