/*Desenvolva um programa que leia um vetor Vet de 10 posições e divida-o em dois de 5 posições. 
Ao final escreva todos os vetores*/

#include <stdio.h>

#define TAMANHO_VETOR 10

int main(void) {
    int vetor[TAMANHO_VETOR];
    float vetor1[TAMANHO_VETOR/2];
    float vetor2[TAMANHO_VETOR/2];
    int valor;
    int meio = TAMANHO_VETOR/2;
    int posicao = TAMANHO_VETOR/2;

    printf("Digite um valor no vetor:\n");
    for(int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d",&valor);
        vetor[i] = valor;
    }

    for(int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Vetor: %d\n", vetor[i]);
    }
    
    printf("\n");

    for(int i = 0; i < meio; i++) {
        vetor1[i] = vetor[i];
        printf("Vetor1: %.2f\n", vetor1[i]);
    }

    printf("\n");

    for(int i = meio; i < TAMANHO_VETOR; i++) {
        vetor2[posicao] = vetor[i];
        printf("Vetor2: %.2f\n", vetor2[i]);
        posicao++;
    }

    return 0;
}