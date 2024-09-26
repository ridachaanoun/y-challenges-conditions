#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter two integer: ");
    scanf("%d %d", &num1,&num2);


    // Calculate the sum
    if (num1 == num2) 
        sum = 3 * (num1 + num2);
     else 
        sum = num1 + num2;

    // Display the result
    printf("The result is: %d\n", sum);

    return 0;
}
