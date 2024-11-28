/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima
o endereço de cada posicao*/

#include <stdio.h>

int main(void) {
    float vetorFloat[11] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < 11; i++) {
        printf("Indice = %d - Endereco = %p\n", i,&vetorFloat[i]);
    }

    return 0;
}