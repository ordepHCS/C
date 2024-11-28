/*Faça um algoritmo que leia um código numérico inteiro e um vetor de 50 posições de números reais. 
Se o código for zero, termine o algoritmo. 
Se o código for 1, mostre o vetor na ordem direta. 
Se o código for 2, mostre o vetor na ordem inversa.*/

#include <stdio.h>

#define VALORES 51

int main(void) {
    float vetor[VALORES];
    int codigo;

    for(int i = 0; i < VALORES; i++) {
        vetor[i] = i;
    }

    printf("Digite um codigo numerico:\n");
    scanf("%d",&codigo);

    for(int i = 0; i < VALORES; i++) {
        if(codigo == 0) {
            break;
        }
    }

    for(int i = 0; i < VALORES; i++) {
        if(codigo == 1) {
            printf("%.2f\n", vetor[i]);
        }
    }

    for(int i = VALORES; i >= 0; i--) {
        if(codigo == 2) {
            printf("%.2f\n",vetor[i]);
        }
    }

    return 0;
}