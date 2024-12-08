#include <stdio.h>

void insertionSort(int *array, int n) {
    int i, key, j;
    for(i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;

        while(j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void printArray(int *array, int size) {
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);
}

int main(void) {
    int array[] = {12, 11, 13, 5, 6};
    int n = 5;

    printf("Array original: \n");
    printArray(array, n);

    insertionSort(array, n);
    printArray(array, n);
    
    return 0;
}
