/*Elaborar um algoritmo que le uma matriz M (6,6) e um valor para A (uma variável). 
Multiplicar a matriz M pelo valor A e coloca os valores da matriz multiplicados por A em um vetor de V(36) 
e escreva no final o vetor V.*/

#include <stdio.h>

int main(void) {
    int M[6][6];
    int V[36];
    int valorA;
    int k = 0;


    for(int i = 0; i < 6; i ++) {
        for(int j = 0; j < 6; j++) {
            printf("Digite um valor para a Matriz:\n");
            scanf("%d",&M[i][j]);        
        }
    }

    printf("Digite um valor para A:\n");
    scanf("%d",&valorA);

    for(int i = 0; i < 6; i ++) {
        for(int j = 0; j < 6; j++) {
            V[k] = M[i][j]*valorA;
            k++;
        }
    }

    for(int i = 0; i < 36; i++) {
        printf("Vetor: %d\n", V[i]);
    }

    return 0;
}