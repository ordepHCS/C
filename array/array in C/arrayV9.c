/*Escreva um algoritmo que armazene em um vetor o quadrado dos números ímpares no intervalo fechado de 
1 a 20. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/

#include <stdio.h>

int main(void) {
    int vetor[20];
    int quadrado;

    for(int i = 0; i <= 20; i++) {
        quadrado = i * i;
        vetor[i] = quadrado; 
    }

    for(int i = 1; i <= 20; i++) {
        printf("%d\n",vetor[i]);
    }

    return 0;
}