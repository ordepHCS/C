#include <stdio.h>

void troca(int *array, int *n) {
    int auxVar = *array;
    *array = *n;
    *n = auxVar;
}

int particiona(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);

    for(int j = low; j <= high - 1; j++) {
        if (array[j] < pivot) {
            i++;
            troca(&array[i], &array[j]);
        }
    }
    troca(&array[i + 1], &array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if(low < high) {
        int pi = particiona(array, low, high);

        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

void imprimeArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

int main(void) {
    int array[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    quickSort(array, 0, n - 1);
    imprimeArray(array, n);
    
    return 0;
}
