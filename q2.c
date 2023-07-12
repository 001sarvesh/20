// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include <stdio.h>
#include <string.h>

void swapStrings(char* str1, char* str2) {
    char temp[100];  // Assuming a maximum string length of 100 characters
    
    strcpy(temp, str1); // Copy the contents of str1 to temp
    strcpy(str1, str2); // Copy the contents of str2 to str1
    strcpy(str2, temp); // Copy the contents of temp to str2
}

int main() {
    
    char str1[100] = "Hello";
    char str2[100] = "World";
    
    printf("Before swap: str1 = %s, str2 = %s\n", str1, str2);
    
    swapStrings(str1, str2);
    
    printf("After swap: str1 = %s, str2 = %s\n", str1, str2);
    
    return 0;
}

