#include <iostream>

using namespace std;

class No {
public:
    int dado;
    No *e;
    No *d;
    No(int dado, No *e = nullptr, No *d = nullptr) {
        this->dado = dado;
        this->d = d;
        this->e = e;
    }
};

class Tree {
public:

    void emOrdem(No *p) {
        if (p == nullptr) {
            return;
        }

        if (p != nullptr) {
            emOrdem(p->e);
            cout << p->dado << endl;
            emOrdem(p->d);
        }
    }

    void preOrdem(No *p) {
        if (p == nullptr) {
            return;
        }

        if (p != nullptr) {
            cout << p->dado << endl;
            emOrdem(p->e);
            emOrdem(p->d);
        }
    }

    void posOrdem(No *p) {
        if (p == nullptr) {
            return;
        }

        if (p != nullptr) {
            posOrdem(p->e);
            posOrdem(p->d);
            cout << p->dado << endl;
        }
    }

    No *raiz;
    Tree() {
        this->raiz = nullptr;
    }

    void add(int info) {
        No *novo = new No(info);
        No *p = raiz;
        No *q = nullptr;

        if (raiz == nullptr) {
            raiz = novo;
            return;
        }

        while (p != nullptr) {
            q = p;

            if (info < p->dado) {
                p = p->e;
            }
            else {
                p = p->d;
            }
        }

        if (info < q->dado) {
            q->e = novo;
        }
        else {
            q->d = novo;
        }
    }

    void emOrdem() {
        cout << "-------------------------------" <<endl;
        cout << "Em-ordem: " << endl;
        emOrdem(raiz);
        cout << "-------------------------------" <<endl;
    }

    void preOrdem() {
        cout << "Pré-ordem: " << endl;
        preOrdem(raiz);
        cout << "-------------------------------" <<endl;
    }

    void posOrdem() {
        cout << "Pós-ordem: " << endl;
        posOrdem(raiz);
        cout << "-------------------------------" <<endl;
    }
};

int main() {
    Tree arvore;

    arvore.add(50);
    arvore.add(30);
    arvore.add(70);
    arvore.add(20);
    arvore.add(40);
    arvore.add(60);
    arvore.add(80);

    arvore.emOrdem();
    arvore.preOrdem();
    arvore.posOrdem();

    return 0;
}