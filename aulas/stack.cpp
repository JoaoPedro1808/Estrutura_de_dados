#include <iostream>

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

class Stack {
public:
    No *head;
    Stack() {
        this->head = nullptr;
    }

    void imprimir() {
        No *p = head;

        while (p != nullptr) {
            cout << p->dado << endl;
            p = p->proximo;
        }
        cout << endl;
    }

    void push(int info) {
        No *novo = new No(info, head);

        head = novo;
    }

    void pop() {
        No *p = head->proximo;
        No *t = head;

        if (head == nullptr) {
            return;
        }
        
        head = p;
        delete t;
    }

    void top() {
        No *p = head;

        cout << p->dado << endl;
    }
};

int main() {
    Stack pilha;

    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(4);

    pilha.imprimir();

    cout << "Valor do topo" << endl;
    pilha.top();

    return 0;
}