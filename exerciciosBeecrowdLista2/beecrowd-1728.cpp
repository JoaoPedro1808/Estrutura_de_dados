#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string equacao;

    while (cin >> equacao) {
        size_t i = equacao.find('=');
        size_t p = equacao.find('+');

        string a = equacao.substr(0, p);
        string b = equacao.substr(p + 1, i - p - 1);
        string c = equacao.substr(i + 1);

        if (a.size() > 7 || b.size() > 7 || c.size() > 7) {
            break;
        }

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        reverse(c.begin(), c.end());

        int a1 = stoi(a);
        int b1 = stoi(b);
        int c1 = stoi(c);
        
        if (a1 + b1 == c1) {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }

    }

   return 0;
}