/*Fazer um algoritmo que leia os valores de duas matrizes 3×3 
e imprima a multiplicação das duas matrizes.*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main(void) {
    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int valores_Matriz_1;
    int valores_Matriz_2;
    int resultado[LINHAS][COLUNAS];

    //Valores da Matriz 1.
    printf("Digite os valores da matriz 1:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            scanf("%d",&valores_Matriz_1);
            matriz1[i][j] = valores_Matriz_1;
        }
    }
    //Valores da Matriz 2.
    printf("Digite os valores da matriz 2:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            scanf("%d",&valores_Matriz_2);
            matriz2[i][j] = valores_Matriz_2;
        }
    }
    //Imprimindo os valores.
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Valores das matrizes 1 e 2: [%d][%d]\n", matriz1[i][j], matriz2[i][j]);
        }
    }
    //Multiplicação das matrizes.
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = 0;
            for(int i = 0; i < LINHAS; i++) {
                for(int j = 0; j < COLUNAS; j++) {
                    resultado[i][j] = matriz1[i][j] * matriz2[i][j];
                }
            }
        }
    }
    printf("\n");
    //Resultado.
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Multiplicacao: %d\n",resultado[i][j]);
        }
    }

    return 0;
}