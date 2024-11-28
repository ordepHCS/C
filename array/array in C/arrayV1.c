/*Escreva um algoritmo que armazene em um vetor todos os números inteiros de 0 a 50. Após isso, o 
algoritmo deve imprimir todos os valores armazenados*/

#include <stdio.h>

int main(void) {
    int vetor[50];

    for(int i = 0; i <= 50; i++) {
        vetor[i] = i;
    }

    for(int i = 0; i <= 50; i++) {
        printf("%d\n",vetor[i]);
    }

    return 0;
}