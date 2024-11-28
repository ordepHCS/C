/*Elaborar um programa que leia dois valores inteiros(A e B). Em seguida faça
uma função que retorne a soma do dobro dos dois numeros lidos. A função devera
armazenar o dobro de A na propria variavel A e o dobro de B na propria variavel
B*/

#include <stdio.h>

void funcaoSoma(int *a, int *b) {
    *a = (*a) * 2;
    *b = (*b) * 2;

    int somaDobro;
    somaDobro = (*a) + (*b);
    printf("Soma = %d\n", somaDobro);
}

int main(void) {
    int A;
    int B;

    printf("Digite o valor de A:\n");
    scanf("%d",&A);
   
    printf("Digite o valor de B:\n");
    scanf("%d",&B);

    funcaoSoma(&A, &B);

    return 0;
}
