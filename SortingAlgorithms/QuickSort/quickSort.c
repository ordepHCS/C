#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int auxVar = *a;
    *a = *b;
    *b = auxVar;
}

int *partition(int* low, int* high) {
    int pivot = *high;
    int* i = low - 1;

    for(int* j = low; j < high; j++) {
        if(*j < pivot) {
            i++;
            swap(i, j);
        }
    }
    swap(i + 1, high);
    return i + 1;
}

void quickSort(int* array, int size) {
    int** stack = (int**)malloc(2 * size * sizeof(int*));
    if(!stack) {
        printf("error\n");
        return;
    }
    int top = -1;

    stack[++top] = array;
    stack[++top] = array + size - 1;

    while(top >= 0) {
        int* high = stack[top--];
        int* low = stack[top--];

        int* pivot = partition(low, high);

        if(pivot - 1 > low) {
            stack[++top] = low;
            stack[++top] = pivot - 1;
        }
        if(pivot + 1 < high) {
            stack[++top] = pivot + 1;
            stack[++top] = high;
        }
    }
}

void printArray(int* array, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

int main(void) {
    int array[] = {45,89,43,11,90,1};
    int n = 6;

    quickSort(array, n);
    printArray(array, n);

    return 0;
}