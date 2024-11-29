/* 1 - Ordene a lista (6, 5, 4, 3, 7, 2, 1) pelo método da bolha
indicando claramente quais elementos foram trocados ou
sobrescritos em cada passo.*/

/* BubbleSort funciona comparando pares de elementos consecutivos e os troca de posicao
* se estiverem fora de ordem
*
* esse processo e repetido ate que o array esteja ordenado
*
* no melhor caso (array 100% ordenado) o algoritmo e (O(n))
* no pior caso quando array nao esta ordenado o algoritmo e (O(n²))*/

#include <stdio.h>

void bubbleSort(int *array, int n) {
    int auxVar;
    // percorre o array desordenado
    for(int i = 0; i < n - 1; i++) {    
        for(int j = 0; j < n - i - 1; j++) {
            if(*(array + j) > *(array + j + 1)) {  // comparacao dos elementos
                auxVar = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = auxVar;
                // "indicando claramente quais elementos foram trocados ou sobrescritos em cada passo."
                printf("Trocou %d com %d:\n ", *(array + j), *(array + j + 1));
                for(int k = 0; k < n; k++) { 
                    printf("%d ", *(array + k));
                }
                printf("\n----------------\n");
            }
        }
    }
}
int main(void) {
    int array[] = {6, 5, 4, 3, 7, 2, 1}; // 1, 2, 3, 4, 5, 6, 7
    int n = 7;

    bubbleSort(array, n);
    
    printf("array ordenado com metodo da bolha:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
