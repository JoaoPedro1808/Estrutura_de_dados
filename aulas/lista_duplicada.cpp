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
    No *anterior;
    No(int dado, No*p = nullptr) {
        this->dado = dado;
        this->proximo = p;
        this->anterior = nullptr;
    }
};

class ListaDuplicada {
public:
    No *head;
    ListaDuplicada() {
        this->head = nullptr;
    }

    void addInicio(int info) {
        No *novo = new No(info);
        if (head == nullptr) {
            head = novo;
        }
        else {
            novo->proximo = head;
            head->anterior = novo;
            head = novo;
        }
    }

    void addFim(int info) {
        No *novo = new No(info);
        No *p = head;

        if (head == nullptr) {
            head = novo;
        }
        else {
            while (p->proximo != nullptr) {
                p = p->proximo;
            }
            p->proximo = novo;
            novo->anterior = p;
        }
    }

    void remove(int info) {
        No *p = head;
        No *anterior = nullptr;

        if (head == nullptr) {
            return;
        }

        if (p->dado == info) {
            head = head->proximo;

            if (head != nullptr) {
                head->anterior = nullptr;
            }

            delete p;
            return;
        }

        while (p != nullptr && p->dado != info) {
            anterior = p;
            p = p->proximo;
        }

        if (p == nullptr) {
            return;
        }

        if (p->anterior != nullptr) {
            p->anterior->proximo = p->proximo;
        }

        if (p->proximo != nullptr) {
            p->proximo->anterior = anterior;
        }
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

int main() {
    ListaDuplicada lista;

    lista.addInicio(3);
    lista.addInicio(2);
    lista.addInicio(1);
    lista.addFim(4);
    lista.addFim(5);
    lista.addFim(6);

    lista.imprimir();

    lista.remove(1);

    lista.imprimir();

    return 0;
}