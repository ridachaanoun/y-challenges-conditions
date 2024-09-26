#include <stdio.h>

int main() {
    float number; // Use float to allow decimal numbers

    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%f", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) 
        printf("The number %.2f is positive.\n", number);
     else if (number < 0) 
        printf("The number %.2f is negative.\n", number);
     else 
        printf("The number is zero.\n");
    

    return 0; 
}
