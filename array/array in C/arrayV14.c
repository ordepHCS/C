/*Escreva um algoritmo que receba quinze números do usuário e armazene em um vetor a raiz quadrada de 
cada número. Caso o valor digitado seja menor que zero o número –1 deve ser atribuído ao elemento do vetor. 
Após isso, o algoritmo deve imprimir todos os valores armazenados.*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int vetor[15];
    double valor;
    double raiz;

    for(int i = 0; i <= 15; i++) {
        vetor[i] = i;
    }

    for(int i = 0; i < 15; i++) {
        printf("Digite um valor\n");
        scanf("%lf",&valor);
        raiz = (sqrt(valor));
        vetor[i] = raiz;
    }

    for(int i = 0; i < 15; i++) {
        printf("%lf\n", vetor[i]);
        if(vetor[i] <= 0) {
            printf("%lf\n", vetor[i] - 1);
        }
    }
    
    return 0;

}
