#include <iostream>
#include <cstdio>
using namespace std;

long long fatorial[100001];
long long fat(int x) {
    if (x == 0){
        fatorial[x] = 1;
        return fatorial[x];
    }
    fatorial[x] = x * fat(x - 1);
    return x * fat(x - 1); 
}


int main(){
    int M;
    cin >> M;
    while (M--){
        cout << "Informe um número: ";
        int N;
        cin >> N;
        cout << fat(N) << endl;
    }

    return 0;
}  