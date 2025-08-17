#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    double trinagulo = (a * c) / 2;
    double circulo = 3.14159 * c * c;
    double trapezio = ((a + b) * c) / 2;
    double quadrado = b * b;
    double retangulo = a * b;

    printf("TRIANGULO: %.3f\n", trinagulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;
}