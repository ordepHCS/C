/* 2 - ordene a lista (4, 3, 1, 7, 6, 2, 5) pelo metodo da insercao 
indicando claramente quais elementos foram trocados ou 
sobrescritos em cada passo. */

/*confesso que perdi um tempo tentando deixar o terminal bonito...
 *
 * InsertionSort funciona pegando um elemento de cada vez e o insere
 * no lugar correto esse processo e repetido ate que o array esteja ordenado
 * 
 * no melhor caso o algoritmo e: O(n) - caso o array estivesse ordenado
 * no pior caso o algoritmo e: O(n²) - caso o array esteja desordenado sendo necessario N trocas
 * como no caso do array fornecido 
 * 
 * usei ponteiros para a manipulacao 
 * 
 * links de onde tirei todas as informações: 
* 1 - https://stackoverflow.com/questions/34974201/generic-insertion-sort-in-c
* 2 - https://youtu.be/-jjkkEegWEk?si=iFNT1Lm-ul-EXCjG
* 3 - slide das aulas que estao no portal fametro 
* 4 - chatgpt */

#include <stdio.h>

void insertionSort(int *array, int n) {
    for(int i = 1; i < n; i++) {
        int *actual = array + i; // ponteiro pro elemento atual
        int *j = actual - 1; // ponteiro pro elemento anterior
        int key = *actual; // armazena o elemento atual

        printf("\n===================\n");
        printf("passo %d:\n", i);
        printf("elemento : %d\n", key);

        // desloca os maiores para a direita
        while(j >= array && *j > key) {
            *(j + 1) = *j; // move o elemento para frente
            printf("  moveu %d para a posicao [%d]\n", *j, (j + 1) - array);
            j--; // move o ponteiro pro elemento anterior

            // exibe array apos cada movimentacao
            printf("  array atual: ");
            for(int k = 0; k < n; k++) {
                printf("%d ", *(array + k));
            }
            printf("\n");
        }

        *(j + 1) = key; // insere o valor na posicao
        printf("inserido %d na posicao %d\n", key, (j + 1) - array);

        // exibe o array apos a insercao
        printf("array depois da troca %d: ", i);
        for(int k = 0; k < n; k++) {
            printf("%d ", *(array + k));
        }
        printf("\n===================\n");
    }
}
int main(void) {
    int array[] = {4, 3, 1, 7, 6, 2, 5}; // 1, 2, 3, 4, 5, 6, 7
    int n = 7;

    insertionSort(array, n);

    printf("\narray ordenado usando o metodo de insercao:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}