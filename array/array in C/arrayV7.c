/*Escreva um algoritmo que armazene em um vetor todos os números pares do intervalo fechado de 1 a 100. 
Após isso, o algoritmo deve imprimir todos os valores armazenados*/

#include <stdio.h>

int main(void) {
    int vetor[100];

    for(int i = 0; i <= 100; i++) {
        vetor[i] = i;
    }

    for(int i = 1; i <= 100; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%d\n",vetor[i]);
        }
    }

    return 0;
}