#include <iostream>
#include <cstdio>
using namespace std;

long long fibonacci[46];

long long fibo(int x) {
    if (fibonacci[x] != -1){
        return fibonacci[x];
    }
    
    if (x == 0){
        fibonacci[x] = 0;
        return fibonacci[x];
    }
    else if (x == 1){
        fibonacci[x] = 1;
        return fibonacci[x];
    }
    fibonacci[x] = fibo(x - 1) + fibo(x - 2);
    return fibonacci[x];
}

void inicializarvetor(){
    for (int i = 0; i < 46; i++){
        fibonacci[i] = -1;
    }

}

int main(){
    inicializarvetor();
    int m;
    cin >> m;

    while (m--){
        cout << "Valor do fibonacci: ";
        int n;
        cin >> n;
        cout << fibo(n) << end
    }

    return 0;
}  