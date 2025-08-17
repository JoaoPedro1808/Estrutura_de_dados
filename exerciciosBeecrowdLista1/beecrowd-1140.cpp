#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
    string frase;
    char letra1;
    bool tauto;

    while (getline(cin, frase) && frase != "*") {
        letra1 = tolower(frase[0]);
        tauto = true;

        for (int i = 1; i < frase.length(); i++) {
            if (frase[i - 1] == ' ' && tolower(frase[i]) != letra1) {
                tauto = false;
                break;
            }
        }
        
        if (tauto) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}