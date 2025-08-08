#include <iostream> // libs entrada/saida C++
#include <cstdio> // Libs entrada/saida C
using namespace std;

// Tipo nome (conjunto de paramentros){} assinatura da função
int main(){
    int x,y;
    cin >> x; // Leitura de entrada dos dados
    cin >> y;
    cout << "X = " << x+y << endl; 
    return 0;

    cin >> x;
    cin >> y;
    cout << "X = " << x-y << endl; 
    return 0;

    cin >> x;
    cin >> y;
    cout << "X = " << x*y << endl; 
    return 0;
    
    cin >> x;
    cin >> y;
    cout << "X = " << x/y << endl; 
    return 0;
}   

// g++ "nome do arquivo", ./"nome do arquivo", ./a.out