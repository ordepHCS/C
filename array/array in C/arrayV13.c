/*Escreva um algoritmo que receba dez números do usuário e armazene em um vetor o cubo de cada 
número. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/

#include <stdio.h>

int main(void) {
    int valor[10];
    int quadrado[10];

    for(int i = 0; i <= 10; i++) {
        printf("Digite um numero\n");
        scanf("%d",&valor[i]);
        quadrado[i] = valor[i] * valor[i] * valor[i];
    }

    for(int i = 0; i <= 10; i++) {
        printf("%d\n",quadrado[i]);
    }

    return 0;
}

    