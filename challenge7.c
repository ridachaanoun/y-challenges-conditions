#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is an uppercase alphabet
    if (ch >= 'A' && ch <= 'Z') 
        printf("%c is an uppercase alphabet.\n", ch);
     else 
        printf("%c is not an uppercase alphabet.\n", ch);
}
