/*Escreva um algoritmo que armazene em um vetor todos os números inteiros de 200 a 100 (em ordem 
decrescente). Após isso, o algoritmo deve imprimir todos os valores armazenados.*/

#include <stdio.h>

int main(void) {
    int vetor[200];

    for(int i = 0; i <= 200; i++) {
        vetor[i] = i;
    }

    for(int i = 200; i >= 100; i--) {
        printf("%d\n",vetor[i]);
    }

    return 0;
}