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
    int dado; // O valor/dado que o nó armazena
    No *proximo; // ponterio para o próximo nó na lista

    // Inicializa o dado e o ponteiro para o próximo nó
    No(int dado, No*p = nullptr) {
        this->dado = dado; // Inicializa o dado do nó
        this->proximo = p; // Inicializa o ponteiro para o próximo nó
    }
};

class ListaEncadeado {
public:
    No * head; // Ponteiro para o primeiro nó da lista

    /// Inicializa a lista encadeada com o head apontando para nullptr
    ListaEncadeado() {
        this->head = nullptr;
    }

    // adiciona um novo nó com o valor info no final da lista
    void add(int info) {
        No *novo = new No(info); // Cria um novo nó com o valor info

        // Se a lista estiver vazia, o novo nó se torna o head
        if (head == nullptr) {
            head = novo;
        }
        else {
            No *p = head; // Ponteiro auxiliar para percorrer a lista

            // percorre a lista até o último nó
            while(p->proximo != nullptr) {
                p = p->proximo; // Avança para o próximo nó
            }
            p->proximo = novo; // Faz o último nó apontar para o novo nó
        }
    }

    // Mescla duas listas encadeadas, ligando o final da primeira ao começo da segunda lista
    void mesclarListas(No* head1, No* head2) {
        this->head = head1; // Define o head da lista atual como o head da primeira lista

        // Se a primeira lista estiver vazia, o head da lista atual sera o head da segunda lista
        if (head1 == nullptr) {
            this->head = head2;
            return;
        }

        // Se a segunda lista estiver vazia, não há nada a mesclar
        if (head2 == nullptr) {
            return;
        }

        No *p = head1; // Ponteiro auxiliar para percorrer a primeira lista

        // percorre a lista até o último nó
        while (p->proximo != nullptr) {
            p = p->proximo; // Avança para o próximo nó
        }

        p->proximo = head2; // Faz o último nó da primeira lista apontar para o head da segunda lista
    }

    // remove o nó com o valor declarado
    void remove(int dadoRemover) {
        No *p = head; // Ponteiro auxiliar para percorrer a lista
        No *anterior = nullptr; // Ponteiro para o nó anterior ao nó atual

        // Se a lista estiver vazia, não há nada a remover
        if (head == nullptr) {
            return;
        }

        // Se o nó a ser removido for o head
        if (head->dado == dadoRemover) {
            head = head->proximo; // Atualiza o head para o próximo nó
            delete p; // Deleta o nó antigo
            return;
        }

        // Percorre a lista para encontrar o nó a ser removido
        while (p != nullptr && p->dado != dadoRemover) {
            anterior = p; // A nova posição do nó anterior
            p = p->proximo; // Avança para o próximo nó
        }

        // Nó não encontrado
        if (p == nullptr) {
            return;
        }

        anterior->proximo = p->proximo; // Pular o nó a ser removido na lista 
        delete p; // Deletar o nó     
    }

    // remove os valores duplicados da lista
    void removerDuplicadas() {
        No *p = head; // Ponteiro auxiliar para percorrer a lista

        // Se a lista estiver vazia, não há nada a remover
        if (head == nullptr) {
            return;
        }

        // Percorre a lista para encontrar e remover valores duplicados
        while (p != nullptr) {
            No *anterior = p; // Ponteiro para o nó anterior ao nó atual
            No *q = p->proximo; // Ponteiro para o próximo nó após o nó atual

            // Percorre a lista a partir do nó seguinte ao nó atual
            while (q != nullptr) {
                // Se encontrar um nó com o mesmo valor, o remove
                if (q->dado == p->dado) {
                    anterior->proximo = q->proximo; // Pular o nó duplicado na lista
                    delete q; // Deletar o nó duplicado
                    q = anterior->proximo; // Avança para o proximo nó
                }
                // Se não for duplicado, avança ambos os ponteiros 
                else {
                    anterior = q; // Atualiza o nó anterior
                    q = q->proximo; // Avança para o próximo nó
                }
            }
            p = p->proximo; // Avança para o próximo nó da lista
        }
    }

    // Buscar um valor declarado na lista
    bool buscar(int info) {
        No *p = head; // Ponteiro auxiliar para percorrer a lista

        // Percorre a lista para encontrar o valor declarado
        while (p != nullptr) {
            // Se encontar o valor, retonar true
            if (p->dado == info) {
                return true;
            }
            p = p->proximo; // Avança para o proxima nó 
        }
        return false; // Caso não encontrar o valor, retorna false
    }

    // Imprime os valores da lista encadeada
    void imprimir() {
        No *p = head; // ponteiro auxiliar para percorrer a lista

        // Percorre a lista e imprime os valores
        while (p != nullptr) {
            cout << p->dado << " "; // Imprime o valor do nó atual
            p = p->proximo; // Avança para o proximo nó
        }
        cout << endl;
    }

    // Conta e imprime quantos valores existem na lista
    void count() {
        No *p = head; // Ponteiro auxiliar para percorrer a lista
        int c = 0; // Variavel para contar os nós

        // Se a lista estiver vazia, não há nada a contar
        if (head == nullptr) {
            return;
        }

        // percorre a lista e conta os nós
        while (p != nullptr) {
            c++; // Incrementa o contador ao encontrar um nó
            p = p->proximo; // Avança para o próximo nó
        }
        cout << c << endl;
    }

    // Inverte a lista encadeada
    void inverter() {
        No *p = this->head; // Ponteiro auxiliar para percorrer a lista
        No *anterior = nullptr; // Ponteiro para o nó anterior ao nó atual
        No *proximo = nullptr; // Ponteiro para o próximo nó após o nó atual

        // Se a lista estiver vazia, não há nada a inverter
        if (head == nullptr) {
            return;
        }

        // Percorre a lista e inverte os ponteiros
        while (p != nullptr) {
            proximo = p->proximo; // Armazena o proximo nó
            p->proximo = anterior; // Inverte o ponteiro do nó atual para o nó anterior
            anterior = p; // Atualiza o nó anterior para o nó atual
            p = proximo; // Avança para o próximo nó
        }
        this->head = anterior; // Atualiza o head para o novo primeiro nó da lista
    }

    // Encontra o valor na posição N da lista
    void encontrar(int info) {
        No *p = head; // Ponteiro auxiliar para percorrer a lista
        int c = 0; // Contador para rastrear a posiçã atual

        // Se a lista estiver vazia, não há nada a encontrar
        if (head == nullptr) {
            return;
        }

        // Percorre a lista para encontrar o valor na posição N
        while (p != nullptr) {
            // Se encontrar a posição N, imprime o valor e retorna o valor da posição
            if (c == info - 1) {
                cout << p->dado << endl;
                return;
            }
            c++; // Incrmenta o contador
            p = p->proximo; // Avança para o próximo nó
        }
    }

    // Remove o nó na posição N da lista
    void removerN (int info) {
        No *p = head; // Ponterio auxiliar para percorrer a lista
        No *anterior = nullptr; // Ponterio para o nó anterior ao nó atual
        int c = 1; // Contador para rastrear a posição atual

        // Se a lista estiver vazia ou a posição for inválida, não há nada a remover
        if (head == nullptr || info < 1) {
            return;
        }

        // Se o nó a ser removido for o head
        if (info == 1) {
            head = head->proximo; // Atualiza o head para o próximo nó
            delete p; // Deleta o nó antigo
            return;        
        }

        // Percorre a lista para encontrar o nó na posição N, ou seja, info
        while (p != nullptr && c < info) {
            anterior = p; // A nova posição do nó anterior
            p = p->proximo; // Avança para o próximo nó
            c++; // Incrementa o contador
        }

        // Nó não encontrado
        if (p == nullptr) {
            return;
        }

        anterior->proximo = p->proximo; // Pular o nó a ser removido na lista
        delete p; // Deletar o nó
    }

    // Duplicar a lista encadeada
    void listaDuplicada() {
        No *p = head; // Ponteiro auxiliar para percorrer a lista

        // Se a lista estiver vazia, não há nada a duplicar
        if (head == nullptr) {
            return;
        }

        // Percorre a lista e duplica cada nó
        while (p != nullptr) {
            No *novo = new No(p->dado); // Cria um novo nó com o mesmo valor do nó atual
            No *q = p->proximo; // Armazena o próximo nó após o nó atual

            p->proximo = novo; // Faz o nó atual apontar para o novo nó
            novo->proximo = q; // Faz o novo nó apontar para o próximo nó original

            p = q; // Avança para o próximo nó original
        }
    }

    // Inverte a lista encadeada de forma recursiva
    void inverteRecursivo(No *p) {
        // Se a lista estiver vazia, não há nada a inverter
        if (p == nullptr) {
            return;
        }

        // Se chegar ao último nó, atualiza o head para esse nó
        if (p->proximo == nullptr) {
            head = p; // O head agora aponta para o último nó
            return;
        }

        inverteRecursivo(p->proximo); // Chama a função recursivamente para o próximo nó

        No *q = p->proximo; // Armazena o próximo nó após o nó atual
        q->proximo = p; // Inverte o ponteiro do próximo nó para o nó atual
        p->proximo = nullptr; // Define o próximo do nó atual como nullptr
    }

    // Ordena a lista encadeada usando o algoritimo selection sort
    void selectionSort() {
        No *p = head; // Ponteiro auxiliar para percorrer a lista

        // Se a lista estiver vazia, não há nada a ordenar
        if (head ==nullptr) {
            return;
        }

        // Percorre a lista para ordenar os valores
        while (p != nullptr) {
            No *min = p; // Ponterio para o nó com o menor valor encontrado

            // Percorre a lista a partir do nó seguinte ao nó atual
            for (No *q = p->proximo; q != nullptr; q = q->proximo) {
                // Se encontrar um nó com valor menor, atualiza o ponteiro min
                if (q->dado < min->dado) {
                    min = q; // Atualiza o ponteiro min para o nó com o menor valor
                }
            }
            int t = p->dado; // Armazena temporariamente o valor do nó atual
            p->dado = min->dado; // Atualiza o valor do nó atual com o menor valor encontrado
            min->dado = t; // Atualiza o valor do nó com o menor valor com o valor temporário

            p = p->proximo; // Avança para o próximo nó
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
