// 5. Write a program to find the maximum number between two numbers using a pointer


#include <stdio.h>

int findMaximum(int* ptr1, int* ptr2) {
    if (*ptr1 > *ptr2) {
        return *ptr1;
    } else {
        
        return *ptr2;
    }
}

int main() {
    int number1 = 10;
    int number2 = 20;
    
    int* ptr1 = &number1;
    int* ptr2 = &number2;
    
    int maximum = findMaximum(ptr1, ptr2);
    
    printf("Number 1: %d\n", number1);
    printf("Number 2: %d\n", number2);
    printf("Maximum number: %d\n", maximum);
    
    return 0;
}

