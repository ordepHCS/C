/*Escreva um algoritmo que armazene em um vetor todos os números inteiros de 100 a 200. Após isso, o 
algoritmo deve imprimir todos os valores armazenados.*/

#include <stdio.h>

int main(void) {
    int vetor[200];

    for(int i = 0; i <= 200; i++) {
        vetor[i] = i;
    }

    for(int i = 100; i <= 200; i++) {
        printf("%d\n",vetor[i]);
    }

    return 0;
}