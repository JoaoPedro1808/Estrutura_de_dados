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
};

int main() {
    

    return 0;
}