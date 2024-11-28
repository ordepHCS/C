/*Escreva um algoritmo que leia um vetor de 80 elementos inteiros. 
Encontre e mostre o menor elemento e sua posição no vetor.*/

#include <stdio.h>

#define VALOR 3

int main(void) {
    int vetor[VALOR];
    int valor;

    for(int i = 0; i < VALOR; i++) {
        vetor[i] = i;
    }

    for(int i = 0; i < VALOR; i++) {
        printf("Digite um valor:\n");
        scanf("%d",&valor);
        vetor[i] = valor;
    }

    int menor = vetor[0];
    int posicao = 0;

    for(int i = 0; i < VALOR; i++) {
        if(vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Menor elemento: %d\n Posicao: %d\n", menor, posicao);

    return 0;
}