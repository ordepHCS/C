/* 9 - Escreva um algoritmo para inverter uma lista simplesmente encadeada em uma única passagem
Por exemplo, a lista (1, 2, 3, 4) deve ser transformada em (4, 3, 2, 1). */

/* fiz essa questao vendo um video de um cara invertendo uma linked list em 5min com python
muito provavelmente nao farei isso no mesmo tempo que ele por estar fazendo isso em c :< mas irei registrar o meu tempo! hehe = 22:00 a 22:31... e o tempo passa rapido

link do video: https://youtu.be/Of_b7iV1OYo?si=oa7dT2gmVjSItMOW*/

#include <stdio.h>
#include <stdlib.h>

// mesmo codigo da linked list da questao 8 so irei implementar a funcao para inverter a querida lista
typedef struct No{
    int elemento;
    struct No* next;
}No;

No* createNo(int elemento) { 
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->elemento = elemento;
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

// inverter a lista
void inverterList(No** headRef) { // headRef = referencia para head
    No* noAnterior = NULL;
    No* atual = *headRef;
    No* next = NULL;
    while(atual != NULL) {
        next = atual->next; // salva o proximo nó
        atual->next = noAnterior; // inverte o ponteiro do nó
        noAnterior = atual; // atualiza o nó anterior
        atual = next; // move pro proximo nó
    }
    *headRef = noAnterior; // atualiza o head para o ultimo nó
}

void printLista(No* head) {
    No* auxVar = head;
    while(auxVar != NULL) {
        printf("%d ", auxVar->elemento);
        auxVar = auxVar->next;
    }
}

int main(void) {
    int valor[] = {1, 2, 3, 4}; // 4, 3, 2, 1
    int n = 4;

    No* head = creatList(valor, n);

    inverterList(&head);
    printLista(head);
    return 0;
}