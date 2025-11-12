#include <iostream>
#include <algorithm>

using namespace std;

class No {
public:
    int dado;
    No *e;
    No *d;
    int altura;
    No(int dado, No *e = nullptr, No *d = nullptr) {
        this->dado = dado;
        this->e = e;  // Corrigido: era 'd' mas deveria ser 'e'
        this->d = d;
        this->altura = 1;
    }
};

class Tree {
private:
    // Função para calcular altura
    int altura(No *p) {
        if (p == nullptr) return 0;
        return p->altura;
    }

    // Função para calcular fator de balanceamento
    int fatorBalanceamento(No *p) {
        if (p == nullptr) return 0;
        return altura(p->e) - altura(p->d);
    }

    // Rotação simples à direita
    No* rotacaoDireita(No *p) {
        No *q = p->e;  // Corrigido: era 'esq' mas deveria ser 'e'
        No *T2 = q->d; // Corrigido: era 'dir' mas deveria ser 'd'
        
        // Realiza rotação
        q->d = p;
        p->e = T2;
        
        // Atualiza alturas
        p->altura = 1 + max(altura(p->e), altura(p->d));
        q->altura = 1 + max(altura(q->e), altura(q->d));
        
        return q;
    }

    // Rotação simples à esquerda
    No* rotacaoEsquerda(No *p) {
        No *q = p->d;  // Corrigido: era 'dir' mas deveria ser 'd'
        No *T2 = q->e; // Corrigido: era 'esq' mas deveria ser 'e'
        
        // Realiza rotação
        q->e = p;
        p->d = T2;
        
        // Atualiza alturas
        p->altura = 1 + max(altura(p->e), altura(p->d));
        q->altura = 1 + max(altura(q->e), altura(q->d));
        
        return q;
    }

    // Inserção recursiva
    No* inserir(No *p, int dado) {
        if (p == nullptr) {
            return new No(dado);
        }

        if (dado < p->dado) {
            p->e = inserir(p->e, dado);
        }
        else if (dado > p->dado) {  // Corrigido: era 'valor' mas deveria ser 'dado'
            p->d = inserir(p->d, dado);
        }
        else {
            return p; // Valores iguais não são inseridos
        }

        // Atualiza altura
        p->altura = 1 + max(altura(p->e), altura(p->d));

        // Calcula fator de balanceamento
        int balanco = fatorBalanceamento(p);

        // Casos de rotação

        // Caso Esquerda-Esquerda
        if (balanco > 1 && dado < p->e->dado) {
            return rotacaoDireita(p);
        }

        // Caso Direita-Direita
        if (balanco < -1 && dado > p->d->dado) {
            return rotacaoEsquerda(p);
        }

        // Caso Esquerda-Direita
        if (balanco > 1 && dado > p->e->dado) {
            p->e = rotacaoEsquerda(p->e);
            return rotacaoDireita(p);
        }

        // Caso Direita-Esquerda
        if (balanco < -1 && dado < p->d->dado) {
            p->d = rotacaoDireita(p->d);
            return rotacaoEsquerda(p);
        }

        return p;
    }

public:
    No *raiz;
    Tree() {
        this->raiz = nullptr;
    }

    void add(int dado) {
        raiz = inserir(raiz, dado);
    }

    void emOrdem(No *p) {
        if (p == nullptr) {
            return;
        }
        emOrdem(p->e);
        cout << p->dado << endl;
        emOrdem(p->d);
    }

    void preOrdem(No *p) {
        if (p == nullptr) {
            return;
        }
        cout << p->dado << endl;
        preOrdem(p->e);
        preOrdem(p->d);
    }

    void posOrdem(No *p) {
        if (p == nullptr) {
            return;
        }
        posOrdem(p->e);
        posOrdem(p->d);
        cout << p->dado << endl;
    }

    void emOrdem() {
        cout << "-------------------------------" << endl;
        cout << "Em-ordem: " << endl;
        emOrdem(raiz);
        cout << "-------------------------------" << endl;
    }

    void preOrdem() {
        cout << "Pré-ordem: " << endl;
        preOrdem(raiz);
        cout << "-------------------------------" << endl;
    }

    void posOrdem() {
        cout << "Pós-ordem: " << endl;
        posOrdem(raiz);
        cout << "-------------------------------" << endl;
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