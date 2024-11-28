/*Desenvolver um programa que efetue a leitura de dez elementos de uma matriz A tipo vetor. 
Construir uma matriz B de mesmo tipo, acompanhando a seguinte lei de informação. 
Se o valor do índice for ímpar, o valor deverá ser multiplicado por 6; 
sendo par, deverá ser somado com 6. Ao final, mostrar os conteúdos das duas matrizes.*/

#include <stdio.h>

#define LINHAS 5
#define COLUNAS 2

int main(void) {
    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int multiplicacao;
    int adicao;
    int valor;

    printf("Digite um valor na matriz A:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            scanf("%d",&valor);
            matrizA[i][j] = valor;
        }
    }

     for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("MatrizA: %d\n", matrizA[i][j]);
        }
     }

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            matrizB[i][j] = matrizA[i][j];
            if(matrizB[i][j] %2 != 0) {
                multiplicacao = matrizB[i][j] * 6;
                printf("MatrizB se for Impar: %d\n", multiplicacao);
            }else {
                adicao = matrizB[i][j] + 6;
                printf("MatrizB se for Par: %d\n", adicao);
            }
        }
    }

    return 0;
}