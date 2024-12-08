#include <stdio.h>
#include <stdlib.h>

void merge(int *array, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for(i = 0; i < n1; i++)
        L[i] = array[left + i];
    for(j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    
    while(i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
    free(L);
    free(R);
}

void mergeSort(int *array, int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        merge(array, left, mid, right);
    }
}

void printArray(int *array, int size) {
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);
}

int main(main) {
    int array[] = {12, 11, 13, 5, 6, 7};
    int n = 6;

    mergeSort(array, 0, n - 1);
    printArray(array, n);
    return 0;
}
