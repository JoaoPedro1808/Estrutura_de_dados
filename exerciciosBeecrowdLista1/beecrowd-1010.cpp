#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a1, a2, b1, b2;
    double v1, v2;

    cin >> a1;
    cin >> b1;
    cin >> v1;  

    cin >> a2;
    cin >> b2;
    cin >> v2;

    double total = (b1 * v1) + (b2 * v2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}