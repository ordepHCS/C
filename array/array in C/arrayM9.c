/*Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos. 
Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.*/

#include <stdio.h>

#define TAMANHO_VETOR 3
#define LINHAS 3
#define COLUNAS 3

int main (void) {
    int vetor[TAMANHO_VETOR];
    int matriz[LINHAS][COLUNAS];
    int valorVetor;
    int valorMatriz;
    int multiplicacao;

    printf("Digite um valor no vetor:\n");
    for(int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d",&valorVetor);
        vetor[i] = valorVetor;
    }

    printf("Digite um valor na matriz:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            scanf("%d",&valorMatriz);
            matriz[i][j] = valorMatriz;
        }
    }

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            multiplicacao = vetor[i] * matriz[i][j];
        }
    }

    for(int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Multiplicacao: %d\n", multiplicacao);
    }

    return 0;
}