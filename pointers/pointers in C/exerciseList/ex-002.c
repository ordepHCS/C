/*Escreva um programa que contenha duas variaveis inteiras.
Compare seus enderecos e exiba o maior valor*/

#include <stdio.h>

int main(void) {
    int var1 = 10;
    int var2 = 10;

    int *ptr1 = &var1;
    int *ptr2 = &var2;

    if(ptr1 > ptr2) {
        printf("ptr1 = %p\n", ptr1);
    }else {
        printf("ptr2 = %p\n", ptr2);
    }
    
    return 0;
}