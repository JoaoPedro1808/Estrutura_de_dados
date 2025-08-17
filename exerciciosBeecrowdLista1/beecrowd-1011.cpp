#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double pi = 3.14159;
    int r;

    cin >> r; 

    printf("VOLUME = %.3f\n", (4 * pi * r * r * r) / 3);

    return 0;
}