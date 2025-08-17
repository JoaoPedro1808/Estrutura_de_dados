#include <iostream> // libs entrada/saida C++
#include <cstdio> // Libs entrada/saida C
using namespace std;

// Tipo nome (conjunto de paramentros){} assinatura da função
int main(){
    double n = 3.14159;
    double r;

    cin >> r;

    double calc = n * r*r;

    printf("A=%.4lf\n", calc);

    return 0;
}       