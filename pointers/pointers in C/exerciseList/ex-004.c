/*Faça um programa que leia 2 valores inteiros e chame uma função que receba
estas 2 variaveis e troque o seu conteudo, ou seja, esta função e chamada passando
duas variaveis A e B por exemplo e, apos a execução da função, A conterá o valor de B
e B tera tera o valor de A.*/

#include <stdio.h>

void funcao(int a, int b) {
    int *ptrA = &a;
    int *ptrB = &b;

    int temp = ptrA;
    ptrA = ptrB;
    ptrB = temp;

    printf("A = %d\nB = %d\n", *ptrA, *ptrB);
}

int main(void) {
    int a;
    int b;

    printf("Digite o valor de A:\n");
    scanf("%d",&a);

    printf("Digite o valor de B:\n");
    scanf("%d",&b);

    funcao(a, b);

    return 0;
}