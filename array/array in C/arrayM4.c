/*Faça um algoritmo que leia um vetor de 500 posições de números inteiros 
e divida todos os seus elementos pelo maior valor do vetor. 
Mostre o vetor após os cálculos.*/

//Adicionei uma logica para dar erro se a divisão for por 0.

#include <stdio.h>

#define VALOR 500

int main(void) {
    int vetor[VALOR];
    int valor;
    float maiorValorDoVetor;

    for(int i = 0; i < VALOR; i++) {
        vetor[i] = i;
    }

    for(int i = 0; i < VALOR; i++) {
        printf("Digite um valor:\n");
        scanf("%d",&valor);
        vetor[i] = valor;
    }

    maiorValorDoVetor = vetor[0];

    for(int i = 0; i < VALOR; i++) {
        if(vetor[i] > maiorValorDoVetor) {
            maiorValorDoVetor = vetor[i];
        }
    }
    
    printf("Apos a divisao por %.2f\n", maiorValorDoVetor);
    
    for(int i = 0; i < VALOR; i++) {
        if(vetor[i] != 0) {
            printf("%.2f\n", maiorValorDoVetor / vetor[i]);
        }else {
            printf("Error\n");
        }
    }

    printf("Valores do vetor:\n");

    for(int i = 0; i < VALOR; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}