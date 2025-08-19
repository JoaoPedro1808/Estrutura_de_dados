#include <iostream>
#include <cstdio>
using namespace std;

long long fibonacci[100001];

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
    for (int i = 0; i < 100001; i++){
        fibonacci[i] = -1;
    }

}

int main(){
    inicializarvetor();
    int m;
    cin >> m;

    while (m--){
        int n;
        cin >> n;
        cout << "Fib("<< n <<")" << " = " << fibo(n) << endl;
    }

    return 0;
}  