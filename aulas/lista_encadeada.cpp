#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

class No {
public:
    int dado;
    No *proximo;
    No(int dado, No*p = nullptr) {
        this->dado = dado;
        this->proximo = p;
    }
}

class ListaEncadeado {
    No * head;
    ListaEncadeado() {
        this->head = nullptr;
    }
    void add(int info) {
        No *novo = new No(info);
        if (head->proximo == nullptr) {
            head->proximo = novo;
        }
        else {
            No *p = head; // auxiliar
            while(p->proximo != nullptr) {
                p = p->proximo;
            }
            p->proximo = novo;
        }
    }
    void remove(int dadoEx, int info) {
        No *p = head->proximo;


    }
}

int main(){

    return 0;
}
