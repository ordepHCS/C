/*Ponteiros duplos: Diferente de um ponteiro simples
que aponta para o endereço de uma variavel um ponteiro
duplo aponta para o endereço de um ponteiro*/

/* Ponteiro Simples:
int *ptr;

// Ponteiro duplo:
int **ptr;*/

#include <stdio.h>

int main(void) {
    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Valor de num = %d\n", num);
    printf("Valor via ptr = %d\n", *ptr);
    printf("Valor via ptr2 = %d\n", **ptr2);

    printf("\n\n");

    printf("Endereco de num = %p\n", &num);
    printf("Endereco de ptr = %p\n", *ptr);
    printf("Endereco de ptr2 = %p\n", *ptr2);

    return 0;
}

