// 8.Write a program to compute the sum of all elements in an array using pointers.

#include <stdio.h>

int computeSum(int* arr, int size) {
    int sum = 0;
    int* ptr = arr;
    
    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }
    
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = computeSum(arr, size);
    
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}

