// Ponteiros e Vetores
#include <stdio.h>

int main(void) {
    /*aula 69
    int vetor[3] = {1,2,3};
    int *pVetor = vetor;  //ou *vetor[0] posicao do vetor dentro das chaves.

    printf("%p\n", *pVetor);*/

    //aula 70
    int vetor[3] = {1,2,3};
    
    int *ponteiro = &vetor[0];

    *(ponteiro + 1) = 10;

    printf("%d\n", vetor[1]);

    return 0;
}