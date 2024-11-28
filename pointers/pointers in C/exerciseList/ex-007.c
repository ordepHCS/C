/*Crie um programa que contenha uma função que permita passar por parametro
dois numeros inteiros A e B. A função devera calcular a soma entre estes dois
numeros e armazenar o resultado na variavel A. Esta função nao devera possuir
retorno, mas devera modificar o valor do primeiro parametro. Imprima os valores
de A e B na função principal*/

#include <stdio.h>

void funcao(int *a, int *b) {
    int soma = (*a) + (*b);
    *a = soma;
}

int main(void) {
    int var1 = 10;
    int var2 = 20;

    funcao(&var1, &var2);
    printf("A = %d\nB = %d", var1, var2);

    return 0;
}