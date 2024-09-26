#include <stdio.h>

int main() {
    int numb;

    printf("Enter a numbber: ");
    scanf("%d", &numb);

    // Determine if the numb is even or odd
    if (numb % 2 == 0) 
        printf("%d is even.\n", numb);
     else 
        printf("%d is odd.\n", numb);
    return 0;
}
