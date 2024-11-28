/*Escreva um programa que contenha duas variaveis inteiras.
Leia essas variaveis do teclado. Em seguida, compare seus endereços
e exiba o conteudo do maior endereço*/

#include <stdio.h>

int main(void) {
    int var1;
    int var2;

    printf("Digite o primeiro valor:\n");
    scanf("%d",&var1);

    printf("Digite o segundo valor:\n");
    scanf("%d",&var2);

    int *ptr1 = &var1;
    int *ptr2 = &var2;

    if(ptr1 > ptr2) {
        printf("var1: %d - %p\n", var1, ptr1);
    }else {
        printf("var2: %d - %p\n", var2, ptr2);
    }

    return 0;
}
