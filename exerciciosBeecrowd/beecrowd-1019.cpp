#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int segundos;

    cin >> segundos;

    int horas = segundos / 3600;
    segundos %= 3600;

    int minutos = segundos /60;
    segundos %= 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}