/*Escreva um algoritmo que leia um vetor inteiro de 30 posições e crie um segundo vetor
substituindo os valores 0 por 1. Mostre os 2 vetores.*/

#include <stdio.h>

#define VALOR 3

int main(void) {
    int vetor1[VALOR];
    int vetor2[VALOR];
    int valor;

    for(int i = 0; i < VALOR; i++) {
        vetor1[i] = i;
    }

    for(int i = 0; i < VALOR; i++) {
        printf("Digite um valor:\n");
        scanf("%d",&valor);
        vetor1[i] = valor;
    }

    for(int i = 0; i < VALOR; i++) {
        printf("Valores do vetor1: %d\n",vetor1[i]);
    }
    
    for(int i = 0; i < VALOR; i++) {
        vetor2[i] = vetor1[i];
        if(vetor2[i] == 0) {
            vetor2[i] = 1;
        }
    }
    
    for(int i = 0; i < VALOR; i++) {
        printf("Valores do vetor2: %d\n", vetor2[i]);
    }

    return 0;
}
