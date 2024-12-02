/* 8 - Escreva um algoritmo em tempo O(n) para remover elementos duplicados de uma lista ordenada
Exemplo: (1, 2, 3, 3, 4, 5, 5, 5, 6, 6) → (1, 2, 3, 4, 5, 6). */

// vou documentar mais tarde :p

#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int elemento;
    struct No* next;
}No;

No* createNo(int data) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->elemento = data;
    novoNo->next = NULL;
    return novoNo;
}

No* creatList(int* valaor, int size) {
    No* head = createNo(valaor[0]);
    No* atual = head;
    for(int i = 1; i < size; i++) {
        atual->next = createNo(valaor[i]);
        atual = atual->next;
    }
    return head;
}

void removerDuplicados(No* head) {
    No* atual = head;
    while(atual != NULL && atual->next != NULL) {
        if(atual->elemento == atual->next->elemento) {
            No* auxVar = atual->next;
            atual->next = atual->next->next;
            free(auxVar);
        }else {
            atual = atual->next;
        }
    }
}

void printLista(No* head) {
    No* auxVar = head;
    while(auxVar != NULL) {
        printf("%d ", auxVar->elemento);
        auxVar = auxVar->next;
    }
}

int main(void) {
    int valor[] = {1, 2, 3, 3, 4, 5, 5, 5, 6, 6};
    int size = 10;

    No* head = creatList(valor, size);

    removerDuplicados(head);
    printLista(head);

    return 0;
}