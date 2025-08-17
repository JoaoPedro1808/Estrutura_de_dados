#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    int maiorab = (a + b + abs(a - b)) / 2;

    if (maiorab > c) {
        cout << maiorab << " eh o maior" << endl;
    } 
    else if (maiorab < c) {
        cout << c << " eh o maior" << endl;
    }

    return 0;
}