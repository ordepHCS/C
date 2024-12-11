#include <stdio.h>

void replace(int *array, int *n) {
    int auxVar = *array;
    *array = *n;
    *n = auxVar;
}

void heapify(int array[], int n, int i) {
    int big = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && array[left] > array[big])
        big = left;
    if(right < n && array[right] > array[big])
        big = right;

    if(big != i) {
        replace(&array[i], &array[big]);
        heapify(array, n, big);
    }
}

void heapSort(int array[], int n) {
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(array, n, i);
    for(int i = n - 1; i >= 0; i--) {
        replace(&array[0], &array[i]);
        heapify(array, i, 0);
    }
}

void imprimeArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

int main(void) {
    int array[] = {12, 11, 13, 5, 6, 7};
    int n = 6;
    heapSort(array, n);
    imprimeArray(array, n);
    
    return 0;
}
