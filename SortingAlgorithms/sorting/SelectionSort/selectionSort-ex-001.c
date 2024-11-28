//Crescente & Decrescente

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
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
int main(void) {
    int notas[] = {85, 60, 75, 90, 70, 95, 80, 65};
    int n = sizeof(notas) / sizeof(notas[0]);
    
    selectionSort(notas, n);
    
    printf("Crescente:\n");
    printArray(notas, n);

    printf("Decrescente:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d, ", notas[i]);
    }

    return 0;
}