/*Escreva um algoritmo que armazene em um vetor todos os números múltiplos de 5, no intervalo fechado de 
1 a 500. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/

#include <stdio.h>

int main(void) {
    int vetor[500];

    for(int i = 0; i <= 500; i++) {
        vetor[i] = i;
    }

    for(int i = 0; i <= 500; i++) {
        if(vetor[i] % 5 == 0) {
            printf("%d\n",vetor[i]);
        }
    }

    return 0;
}