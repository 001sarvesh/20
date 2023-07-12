// 6. Write a program to calculate the length of the string using a pointer


#include <stdio.h>

int stringLength(char* str) {
    int length = 0;
    
    while (*str != '\0') {
        length++;
        str++;
    }
    
    return length;
}

int main() {
    char str[] = "Hello, World!";
    int length;
    
    length = stringLength(str);
    
    printf("String: %s\n", str);
    printf("Length of the string: %d\n", length);
    
    return 0;
}

