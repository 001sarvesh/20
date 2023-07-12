// 4. Write a program in C to demonstrate how to handle the pointers in the program.

#include <stdio.h>

int main() {
    int number = 10;
    int* ptr = &number;
    
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value of ptr: %p\n", ptr);
    printf("Value at the address stored in ptr: %d\n", *ptr);
    
    int array[] = {1, 2, 3, 4, 5};
    int* arrayPtr = array;
    
    printf("\nElements of array using arrayPtr:\n");
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d ", *(arrayPtr + i));
    }
    printf("\n");
    
    return 0;
}

