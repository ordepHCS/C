#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void countingSort(int array[], int n, int max) {
    int *count = (int *)calloc((max + 1), sizeof(int));
    int *output = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        count[array[i]]++;
    }
    for(int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }
    for(int i = n - 1; i >= 0; i--) {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }
    for(int i = 0; i < n; i++) {
        array[i] = output[i];
    }

    free(count);
    free(output);
}

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

int main(void) {
    int array[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;
    int max = 8;

    countingSort(array, n, max);
    printArray(array, n);

    return 0;
}
