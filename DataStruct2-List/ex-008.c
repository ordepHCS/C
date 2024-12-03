/* 8 - Escreva um algoritmo em tempo O(n) para remover elementos duplicados de uma lista ordenada
Exemplo: (1, 2, 3, 3, 4, 5, 5, 5, 6, 6) → (1, 2, 3, 4, 5, 6). */

// escolhi usar uma simples e linda linked list :D
// o algoritmo esta em O(n) neste exemplo! porque o algoritmo percorre todos os N nós da linked list uma so vez

// agora que eu terminei de documentar o codigo eu percebi que misturei o codigo com plavras em ingles e portugues :p

#include <stdio.h>
#include <stdlib.h>

// estrutura do nó
typedef struct No{
    int elemento; // valor do nó
    struct No* next; // ponteiro pro proximo nó
}No;
// criar um nó
No* createNo(int elemento) { 
    No* novoNo = (No*)malloc(sizeof(No)); // aloca a memoria para um novo nó
    novoNo->elemento = elemento;
    novoNo->next = NULL; // inicia o ponteiro next como nulo
    return novoNo; // retorna o ponteiro para o proximo nó
}
// criar a linked list
No* creatList(int* valaor, int size) {
    No* head = createNo(valaor[0]); // cria o nó head com o primeiro valor
    No* atual = head; // ponteiro para achar o nó atual
    for(int i = 1; i < size; i++) {
        atual->next = createNo(valaor[i]); // cria um novo nó e liga ao nó atual
        atual = atual->next; // avança pro proximo nó
    }
    return head; // retorna o ponteiro para o nó head
}
// remover os valores duplicados
void removerDuplicados(No* head) {
    No* atual = head; // ponteiro para achar o nó atual
    while(atual != NULL && atual->next != NULL) {
        if(atual->elemento == atual->next->elemento) {
            No* auxVar = atual->next; // ponteiro temporario pro proximo nó
            atual->next = atual->next->next; //pula o nó duplicado
            free(auxVar); // libera a memoria do nó duplicado
        }else {
            atual = atual->next; // senao avança para o proximo nó
        }
    }
}
// imprimir a lista na main
void printLista(No* head) {
    No* auxVar = head;
    while(auxVar != NULL) {
        printf("%d ", auxVar->elemento); // :>
        auxVar = auxVar->next;
    }
}

int main(void) {
    int valor[] = {1, 2, 3, 3, 4, 5, 5, 5, 6, 6};
    int n = 10;

    No* head = creatList(valor, n);

    removerDuplicados(head);
    printLista(head);

    return 0;
}