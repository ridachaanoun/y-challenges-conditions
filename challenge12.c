#include <stdio.h>

int main() {
    int h1, m1, s1; // Variables for the first instant
    int h2, m2, s2; // Variables for the second instant

    // Read the first instant
    printf("Enter the first instant (HH:MM:SS): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    // Read the second instant
    printf("Enter the second instant (HH:MM:SS): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // Compare the two instants
    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("The first instant comes before the second.\n");
    } else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("The second instant comes before the first.\n");
    } else {
        printf("They are the same instant.\n");
    }

    return 0; // Return 0 to indicate successful completion
}
