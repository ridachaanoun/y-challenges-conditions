#include <stdio.h>
#include <string.h> // Include for using strcpy

int main() {
    int month, day, year;
    char monthName[20];

    // Ask the user for a date in the format MM/DD/YYYY
    printf("Enter a date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &month, &day, &year);

    // Determine the month name
    switch (month) {
        case 1:  strcpy(monthName, "January"); break;
        case 2:  strcpy(monthName, "February"); break;
        case 3:  strcpy(monthName, "March"); break;
        case 4:  strcpy(monthName, "April"); break;
        case 5:  strcpy(monthName, "May"); break;
        case 6:  strcpy(monthName, "June"); break;
        case 7:  strcpy(monthName, "July"); break;
        case 8:  strcpy(monthName, "August"); break;
        case 9:  strcpy(monthName, "September"); break;
        case 10: strcpy(monthName, "October"); break;
        case 11: strcpy(monthName, "November"); break;
        case 12: strcpy(monthName, "December"); break;
        default: printf("Invalid month!\n"); return 1;
    }

    // Display the date in the desired format
    printf("%d-%s-%d\n", day, monthName, year);

    return 0;
}
