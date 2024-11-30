/* 3 - Ordene a lista (2, 5, 6, 4, 3, 1, 7) pelo método da selecao
indicando claramente quais elementos foram trocados ou sobrescritos em cada passo. */

/*o selectionSort organiza um array selecionado repetidamente o menor ou maior elemento
* da parte nao ordenada e movendo-o para a posicao correta
*
* melhor caso: O(n²) mesmo que o array esteja ordenado
* pior caso: O(n²) tambem o numero de comparacoes sao a mesma
* 
* usei ponteiros para a manipulacao
* 
* links de onde tirei todas as informações: 
* 1 - https://youtu.be/DkzNKFn5wOw?si=tM2EyOPUYGRWj10b
* 3 - slide das aulas que estao no portal fametro 
* 4 - chatgpt */

#include <stdio.h>

void selectionSort(int *array, int n) {
    int *minIndex; // ponteiro para armazenar o indice do menor elemento
    int auxVar; // var para as trocas

    // percorre o array
    for(int i = 0; i < n - 1; i++) {
        minIndex = array + i; 
        for(int j = i + 1; j < n; j++) {
            // atualiza "minIndex" caso encontre um elemento menor
            if(*(array + j) < *minIndex) {
                minIndex = array + j;
            }
        }
        // faz a troca se o menor elemento nao for o elemento atual
        if(minIndex != (array + i)) {
            auxVar = *(array + i);
            *(array + i) = *minIndex;
            *minIndex = auxVar; 
        }

        // "indicando claramente quais elementos foram trocados ou sobrescritos em cada passo.""
        printf("depois da troca %d: ", i + 1);
        for(int k = 0; k < n; k++) {
            printf("%d ", *(array + k));
        }
        printf("\n=====================\n");
    }
}
int main(void) {
    int array[] = {2, 5, 6, 4, 3, 1, 7};
    int n = 7;

    selectionSort(array, n);

    printf("array ordenado:");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}