#include <stdio.h>

int main() {
    float average;

    printf("Enter the average grade: ");
    scanf("%f", &average);

    // Determine honors based on the average
    if (average < 10) 
        printf("The student fails.\n");
     else if (average < 12) 
        printf("The student gets passable honors.\n");
     else if (average < 14) 
        printf("The student gets fairly good honors.\n");
     else if (average < 16) 
        printf("The student gets good honors.\n");
     else  // average >= 16
        printf("The student gets very good honors.\n");
    
}
