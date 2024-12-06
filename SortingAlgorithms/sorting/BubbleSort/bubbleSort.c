#include <stdio.h>

void bubbleSort(int *array, int n) {
    int auxVar;

    for(int i = 0; i < n - 1; i++) {    
        for(int j = 0; j < n - i - 1; j++) {
            if(*(array + j) > *(array + j + 1)) { 
                auxVar = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = auxVar;
            }
        }
    }
}
int main(void) {
    int array[] = {7, 6 , 5, 4, 3, 2, 1};
    int n = 7;

    bubbleSort(array, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
