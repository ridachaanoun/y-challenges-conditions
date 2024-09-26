#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Array of days of the week
    char daysOfWeek[7][10] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };
    // Seed the random number generator
    srand(time(NULL));

    // Display the random day of the week
    printf("Random day of the week: %s\n", daysOfWeek[rand() % 7]);

}
