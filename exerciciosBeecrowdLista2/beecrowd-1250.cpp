#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

int main() {
    int n;
    
    cin >> n;

    while (n--) {
        int s;
        cin >> s;

        int alturas[s];
        for(int i = 0; i < s; i++) {
            cin >> alturas[i];
        }
        
        string acoes;
        cin >> acoes;
        
        int dano = 0;
        
        for(int i = 0; i < s; i++) {
            if (acoes[i] == 'S') {
                if (alturas[i] == 1 || alturas[i] == 2) {
                    dano++;
                }
            }
            else if (acoes[i] == 'J') {
                if (alturas[i] > 2) {
                    dano++;
                }
            }
        }
        
        cout << dano << endl;
    }

    return 0;
}