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

class listaCircular {
public:
    No *head;
    listaCircular() {
        this->head = nullptr;
    }
    void addInicio(int info) {
        No *novo = new No(info);

        if (head == nullptr) {
            head = novo;
            novo->proximo = head;
            novo->anterior = head;
        }
        else {
            No *ultimo = head->anterior;

            novo->proximo = head;
            novo->anterior = ultimo;
            ultimo->proximo = novo;
            head->anterior = novo;
            head = novo;
        }
    }
    void addFim(int info) {
        No *novo = new No(info);

        if (head == nullptr) {
            head = novo;
            novo->proximo = head;
            novo->anterior = head;
        }
        else {
            No *ultimo = head->anterior;

            novo->proximo = head;
            novo->anterior = ultimo;
            head->anterior->proximo = novo;
            head->anterior = novo;
        }
    }

    void remove(int info) {
        No *p = head->proximo;

        while (p != head && p->dado != info) {
            p = p->proximo;
        }

        if (p != head) {
            p->anterior->proximo = p->proximo;
            p->proximo->anterior = p->anterior;
            delete p;
        }
    }
    
    void removerDuplicadas() {
        No *p = head;

        while (true) {
            No *anterior = p; 
            No *q = p->proximo;

            while (q != p) {
                if (q->dado == p->dado) {
                    anterior->proximo = q->proximo;
                    if (q == head) {
                        head = q->proximo;
                    }
                    delete q;
                    q = anterior->proximo;
                }
                else {
                    anterior = q;
                    q = q->proximo;
                }
            }
            p = p->proximo;

            if (p == head) {
                break;
            }
        }
    }

    bool buscar(int info) {
        if (head == nullptr) {
            return false;
        }

        No *p = head;
        if (p->dado == info) {
            return true;
        }
        p = p->proximo;

        while (p != head) {
            if (p->dado == info) {
                return true;
            }
            p = p->proximo;
        }
        return false;
    }

    void imprimir() {
        if (head == nullptr) {
            cout << endl;
            return;
        }

        No *p = head;
        cout << p->dado << " ";
        p = p->proximo;

        while (p != head) {
            cout << p->dado << " ";
            p = p->proximo;
        }
        cout << endl;
    }
};

int main() {
    listaCircular lista;

    lista.addInicio(3);
    lista.addInicio(2);
    lista.addInicio(1);
    lista.addInicio(1);
    lista.addFim(4);
    lista.addFim(5);
    lista.addFim(6);

    lista.imprimir();

    lista.removerDuplicadas();

    lista.imprimir();

    return 0;

}