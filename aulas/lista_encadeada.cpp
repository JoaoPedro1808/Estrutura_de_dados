#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

// Definindo a classe No
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
        this->head = head1;

        if (head1 == nullptr) {
            this->head = head2;
            return;
        }

        if (head2 == nullptr) {
            return;
        }

        No *p = head1;
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

    void count() {
        No *p = head;
        int c = 0;

        if (head == nullptr) {
            return;
        }

        while (p != nullptr) {
            c++;
            p = p->proximo;
        }
        cout << c << endl;
    }

    void inverter() {
        No *p = this->head;
        No *anterior = nullptr;
        No *proximo = nullptr;

        if (head == nullptr) {
            return;
        }

        while (p != nullptr) {
            proximo = p->proximo;
            p->proximo = anterior;
            anterior = p;
            p = proximo;
        }
        this->head = anterior;
    }

    void encontrar(int info) {
        No *p = head;
        int c = 0;

        if (head == nullptr) {
            return;
        }

        while (p != nullptr) {
            if (c == info - 1) {
                cout << p->dado << endl;
                return;
            }
            c++;
            p = p->proximo;
        }
    }

    void removerN (int info) {
        No *p = head;
        No *anterior = nullptr;
        int c = 0;

        if (head == nullptr) {
            return;
        }

        if (info - 1 == 0) {
            head = head->proximo;
            delete p;
            return;        
        }

        while (p != nullptr) {
            anterior = p;
            p = p->proximo;
            c++;
        }

        if (p == nullptr) {
            return;
        }

        anterior->proximo = p->proximo;
        delete p;
    }

    void listaDuplicada() {
        No *p = head;

        if (head == nullptr) {
            return;
        }

        while (p != nullptr) {
            No *novo = new No(p->dado);
            No *q = p->proximo;

            p->proximo = novo;
            novo->proximo = q;

            p = q;
        }
    }

    void inverteRecursivo(No *p) {
        if (p == nullptr) {
            return;
        }

        if (p->proximo == nullptr) {
            head = p;
            return;
        }

        inverteRecursivo(p->proximo);

        No *q = p->proximo;
        q->proximo = p;
        p->proximo = nullptr;
    }

    void selectionSort() {
        No *p = head;

        if (head ==nullptr) {
            return;
        }

        while (p != nullptr) {
            No *min = p;

            for (No *q = p->proximo; q != nullptr; q = q->proximo) {
                if (q->dado < min->dado) {
                    min = q;
                }
            }
            int t = p->dado;
            p->dado = min->dado;
            min->dado = t;

            p = p->proximo;
        }
    }
};

int main(){
    ListaEncadeado lista1;
    lista1.add(1);
    lista1.add(2);
    lista1.add(3);
    lista1.add(5);
    lista1.add(4);

    lista1.imprimir();

    lista1.inverteRecursivo(lista1.head);

    lista1.imprimir();

    return 0;
};
