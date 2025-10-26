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

    void mesclarListas(No* head1, No* head2) {
        No *p = head1;
        No *q = head2;

        if (head1 == nullptr) {
            return;
        }

        if (head2 == nullptr) {
            return;
        }

        while (p->proximo != nullptr) {
            p = p->proximo;
        }

        p->proximo = head2;
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
    ListaEncadeado lista1;
    lista1.add(10);
    lista1.add(20);
    lista1.add(30);
    lista1.add(10);
    lista1.add(15);
    lista1.add(40);

    lista1.imprimir();

    ListaEncadeado lista2;
    lista2.add(5);
    lista2.add(15);
    lista2.add(20);
    lista2.add(35);

    lista2.imprimir();

    lista1.mesclarListas(lista1.head, lista2.head);

    lista1.imprimir();

    return 0;
};
