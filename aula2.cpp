#include <iostream> // libs entrada/saida C++
#include <cstdio> // Libs entrada/saida C
using namespace std;

// Tipo de retorno nome_funcao (cn) parametros tipos 
bool par(int x) {
    if (x % 2 == 0) {
        return false;
    } // Não precisa de else, pois se entrar no if, já retorna
        return true; 
}

int main(){
    int x;
    cin >> x;
    cout << par(x);


    return 0;
}   