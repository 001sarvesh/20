// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]


#include <stdio.h>

void sort(int* ptr, int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (ptr[j] > ptr[j + 1]) {
                // Swap elements
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {5, 2, 8, 1, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int i;
    
    printf("Before sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    sort(array, size);
    
    printf("After sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
