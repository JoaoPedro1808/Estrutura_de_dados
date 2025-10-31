#include <iostream>

using namespace std;

class No {
public:
    int dado;
    No *proximo;
    No *anterior;
    No(int dado = 0, No*p = nullptr) {
        this->dado = dado;
        this->proximo = p;
        this->anterior = nullptr;
    }
};

class queue {
public:
    No *head;

    queue() {
        this->head = new No(0);
        head->proximo = head;
        head->anterior = head;
    }

    void enqueue(int info) {
        No* novo = new No(info);

        novo->proximo = head;
        novo->anterior = head->anterior;
        head->anterior->proximo = novo;
        head->anterior = novo;
    }

    void dequeue() {
        if (head->proximo == head) {
            return;
        }

        No* primeiro = head->proximo;
        head->proximo = primeiro->proximo;
        primeiro->proximo->anterior = head;
        delete primeiro;
    }

    void imprimir() {
        No *p = head->proximo;

        while (p != head) {
            cout << p->dado << " ";
            p = p->proximo;
        }

        cout << endl;
    }

    void front() {
        if (head->proximo == head) {
            return;
        }
        cout << head->proximo->dado << endl;
    }

    void back() {
        if (head->anterior == head) {
            return;
        }
        cout << head->anterior->dado << endl;
    }
};


int main() {
    queue fila;

    fila.enqueue(1);
    fila.enqueue(2);
    fila.enqueue(3);
    fila.enqueue(4);

    fila.front();

    fila.back();

    fila.imprimir();

    return 0;
};