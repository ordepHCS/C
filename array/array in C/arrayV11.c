/*Escreva um algoritmo que receba dez números do usuário e armazene em um vetor a metade de cada 
número. Após isso, o algoritmo deve imprimir todos os valores armazenados*/

#include <stdio.h>

int main(void) {
    float vetor[10];
    int valor;

    for(int i = 0; i < 10; i++) {
        vetor[i] = i;
    }

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor\n");
        scanf("%d",&valor);
        vetor[i] = valor/2;
        printf("%f\n",vetor[i]);
    }

    return 0;
}