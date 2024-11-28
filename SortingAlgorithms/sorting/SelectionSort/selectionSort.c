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
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main(void) {
    int arr[] = {50, 40, 30, 20, 10}; //10, 20, 30, 40, 50. 
    int n = 5;

    selectionSort(arr, n);

    for(int i = 0; i < n; i++) {
        printf("%d, ",arr[i]);
    }
    return 0;
}