/*Faça um programa que leia uma matriz 10x10 de inteiros. 
A seguir transforme-a em um vetor.*/

#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(void) {
    int matriz[LINHAS][COLUNAS];
    int vetor [LINHAS * COLUNAS];
    int indice = 0;
    int posicao = 0;

    printf("Digite um valor para matriz:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < LINHAS; j++) {
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            vetor[indice] = matriz[i][j];
            indice++;
        }
    }

    for(int i = 0; i < LINHAS * COLUNAS; i++) {
        posicao = i;
        printf("Elemento: %d | Posicao: %d\n",vetor[i],posicao);
    }

    return 0;
}