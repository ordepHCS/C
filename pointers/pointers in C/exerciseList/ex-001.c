/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para
inteiros, real e char. Associe as variaveis aos ponteiros (use &). Modifique os valores
de variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a modificacao*/

#include <stdio.h>

int main(void) {
    int varInt = 10;
    float varReal = 15.0;
    char varCharVet[4] = "sim";
    char varCharUnic = 'A';

    int *ptrInt = &varInt;
    float *ptrReal = &varReal;
    char *ptrCharVet = &varCharVet;
    char *ptrVarUnic = &varCharUnic;

    printf("Antes:\n\n");

    printf("Inteiro = %d\n", varInt);
    printf("Real = %2.f\n", varReal);
    printf("Char com vetor de char = %s\n", varCharVet);
    printf("Char com um char = %c\n\n", varCharUnic);

    *ptrInt = 15;
    *ptrReal = 20.0;
    *(ptrCharVet + 0) = 'n';
    *(ptrCharVet + 1) = 'a';
    *(ptrCharVet + 2) = 'o';
    *ptrVarUnic = 'B';

    printf("Depois:\n\n");

    printf("Inteiro = %d\n", varInt);
    printf("Real = %2.f\n", varReal);
    printf("Char com vetor de char = %s\n", varCharVet);
    printf("Char com um char = %c\n", varCharUnic);

    return 0;
}