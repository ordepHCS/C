/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de casa posicao dessa matriz*/

#include <stdio.h>

int main(void) {
    float matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Indice = [%d][%d] - Endereco = %p\n", i, j, &matriz[i][j]);
        }
    } 
    return 0;
}