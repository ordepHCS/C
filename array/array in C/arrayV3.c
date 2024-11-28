/*Escreva um algoritmo que armazene em um vetor todos os números inteiros de 100 a 1 (em ordem 
decrescente). Após isso, o algoritmo deve imprimir todos os valores armazenados.*/

#include <stdio.h>

int main(void) {
    int vetor[100];

    for(int i = 0; i <= 100; i++) {
        vetor[i] = i;
    }

    for(int i = 100; i >= 0; i--) {
        printf("%d\n",vetor[i]);
    }

    return 0;
}