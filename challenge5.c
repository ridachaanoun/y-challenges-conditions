#include <stdio.h>

int main() {
    int year, choice;
    long long int result;

    // User input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Menu
    printf("Select option:\n");
    printf("1. Months\n");
    printf("2. Days\n");
    printf("3. Hours\n");
    printf("4. Minutes\n");
    printf("5. Seconds\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Perform conversion based on user choice
    switch (choice) {
        case 1:
            result = year * 12;
            printf("%d years = %lld months\n", year, result);
            break;
        case 2:
            result = year * 365;
            printf("%d years = %lld days\n", year, result);
            break;
        case 3:
            result = year * 365 * 24;
            printf("%d years = %lld hours\n", year, result);
            break;
        case 4:
            result = year * 365 * 24 * 60;
            printf("%d years = %lld minutes\n", year, result);
            break;
        case 5:
            result = year * 365 * 24 * 60 * 60;
            printf("%d years = %lld seconds\n", year, result);
            break;
        default:
            printf("Invalid choice! Please select a valid option.\n");
            break;
    }

    return 0;
}
