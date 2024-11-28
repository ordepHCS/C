/*Faça um programa que leia dois valores inteiros e chame uma função
que receba estes 2 valores de entrada e retorne o maior valor na primeira
variavel e o menor na segunda variavel. Escreva o conteudo das duas variaveis
na tela.*/

#include <stdio.h>

void funcao(int a, int b) {
    int maior;
    int menor;

    printf("Digite o primeiro valor:\n");
    scanf("%d",&a);

    printf("Digite o segundo valor:\n");
    scanf("%d",&b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    if(ptr1 > ptr2) {
        maior = *ptr1;
        menor = *ptr2;
    }else {
        maior = *ptr2;
        menor = *ptr1;
    }

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
}

int main(void) {
    int var1;
    int var2;

    funcao(var1, var2);

    return 0;
}