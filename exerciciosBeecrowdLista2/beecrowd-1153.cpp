#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int fatorial(int x){
    if(x == 0){
        return 1;
    }
    return fatorial(x-1)*x;
}

int main(){

    int n;
    cin >> n;

    cout << fatorial(n) << endl;

    return 0;
}