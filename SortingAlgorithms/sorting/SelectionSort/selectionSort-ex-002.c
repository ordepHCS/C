#include <stdio.h>

void selectionSort(int arr[], int n) {
    int minIndex;

    for(int i = 0; i < n - 1; i++) {
        minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int aux = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = aux;
    }
}

int main(void) {
    int arrayNotas[3];
    int n = 3;

    printf("Digite suas notas que irei ordena-la de forma decrescente usando SelectionSort ^-^\n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arrayNotas[i]);
    }

    selectionSort(arrayNotas, n);

    printf("Notas:\n");
    for(int i = 0; i < n; i++) {
        printf("%d, ", arrayNotas[i]);
    }
    return 0;
}