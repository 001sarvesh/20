// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer

#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(char* str, int* vowels, int* consonants) {
    *vowels = 0;
    *consonants = 0;
    
    while (*str != '\0') {
        char ch = tolower(*str);
        
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        
        str++;
    }
}

int main() {
    char str[] = "Hello, World!";
    int vowels, consonants;
    
    countVowelsAndConsonants(str, &vowels, &consonants);
    
    printf("String: %s\n", str);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    
    return 0;
}


