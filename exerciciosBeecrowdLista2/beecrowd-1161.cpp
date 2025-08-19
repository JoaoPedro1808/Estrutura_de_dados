#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

long long fatorial(int x){
    if(x == 0){
        return 1;
    }
    return fatorial(x-1)*x;
}

int main(){
    int n, m;

    while (cin >> n >> m) {
        cout << fatorial(n) + fatorial(m) << endl;
    }

    return 0;
}