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
};

class ListaEncadeado {
public:
    No * head;
    ListaEncadeado() {
        this->head = nullptr;
    }
    void add(int info) {
        No *novo = new No(info);
        if (head == nullptr) {
            head = novo;
        }
        else {
            No *p = head;
            while(p->proximo != nullptr) {
                p = p->proximo;
            }
            p->proximo = novo;
        }
    }
    void remove(int dadoRemover) {
        No *p = head;
        No *anterior = nullptr;

        if (head == nullptr) {
            return;
        }

        if (head->dado == dadoRemover) {
            head = head->proximo;
            delete p;
            return;
        }

        while (p != nullptr && p->dado != dadoRemover) {
            anterior = p;
            p = p->proximo;
        }

        if (p == nullptr) {
            return;
        }

        anterior->proximo = p->proximo;
        delete p;                        
    }

    void removerDuplicadas() {
        No *p = head;

        if (head == nullptr) {
            return;
        }

        while (p != nullptr) {
            No *anterior = p; 
            No *q = p->proximo;

            while (q != nullptr) {
                if (q->dado == p->dado) {
                    anterior->proximo = q->proximo;
                    delete q;
                    q = anterior->proximo;
                }
                else {
                    anterior = q;
                    q = q->proximo;
                }
            }
            p = p->proximo;
        }
    }

    bool buscar(int info) {
        No *p = head;
        while (p != nullptr) {
            if (p->dado == info) {
                return true;
            }
            p = p->proximo;
        }
        return false;
    }

    void imprimir() {
        No *p = head;
        while (p != nullptr) {
            cout << p->dado << " ";
            p = p->proximo;
        }
        cout << endl;
    }
};

int main(){
    ListaEncadeado lista;

    lista.add(10);
    lista.add(20);
    lista.add(30);
    lista.add(10);
    lista.add(15);
    lista.add(40);

    lista.imprimir();

    lista.removerDuplicadas();

    lista.imprimir();

    return 0;
};
