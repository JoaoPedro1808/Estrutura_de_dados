#include <iostream>
#include <cstdio>
using namespace std;

long long fibonacci[39];
int num_calls = 0;
int result = 0;

long long fibo(int x) {
    if (x == 0){
        fibonacci[x] = 0;
        return fibonacci[x];
    }
    if (x == 1){
        fibonacci[x] = 1;
        return fibonacci[x];
    }
    fibonacci[x] = fibo(x - 1) + fibo(x - 2);
    return fibonacci[x];
}

int chamadas(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return chamadas(x - 1) + chamadas(x - 2) + 1;
}

int main(){
    int m;
    cin >> m;

    while (m--){
        int n;
        cin >> n;
        num_calls = chamadas(n) - 1;
        result = fibo(n);
        cout << "fib(" << n << ")" << " = " << num_calls << " calls" << " = " << result << endl;
    }

    return 0;
}  