// 10. Write a program to print a string in reverse using a pointer

#include <stdio.h>

void printStringReverse(char* str) {
    // Find the length of the string
    int length = 0;
    char* ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    
    // Print the string in reverse order
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    
    printf("String in reverse: ");
    printStringReverse(str);
    
    return 0;
}

