#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

int main() {
    int n, instancia = 1;

    while (std::cin >> n) {
        long long produto = 1;
        int expoente_de_5 = 0;
        
        for (int i = 5; i <= n; i *= 5) {
            expoente_de_5 += n / i;
        }

        for (int i = 1; i <= n; i++) {
            int temp = i;

            while (temp % 5 == 0) {
                temp /= 5;
            }

            while (temp % 2 == 0 && expoente_de_5 > 0) {
                temp /= 2;
                expoente_de_5--;
            }
            
            produto = (produto * temp) % 10;
        }
        
        if (expoente_de_5 > 0) {
             int ultimos_digitos_potencia_2[] = {1, 2, 4, 8, 6};
            produto = (produto * ultimos_digitos_potencia_2[expoente_de_5 % 4 + 1]) % 10;
        }
        
        std::cout << "Instancia " << instancia++ << std::endl;
        std::cout << produto << std::endl;
        std::cout << std::endl;
    }

    return 0;
}