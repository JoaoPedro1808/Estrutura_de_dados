#include <iostream>
#include <cstdio>
using namespace std;

long long fibonacci[100001];

long long fibo(int x) {
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


int main(){
    int m;
    cout << "Quantas operações deseja realizar?" << endl;
    cin >> m;

    while (m--){
        cout << "Informe a posição do fibonacci: ";
        int n;
        cin >> n;
        cout << fibo(n) << endl;
    }

    return 0;
}  