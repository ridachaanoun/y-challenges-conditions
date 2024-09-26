// #include <stdio.h>

// int main() {
//     float x1, y1, x2, y2; // Coordinates of the segment endpoints
//     float x, y;           // Coordinates of the point

//     // Read the coordinates of the segment endpoints
//     printf("Enter the coordinates of the first endpoint of the segment (x1 y1): ");
//     scanf("%f %f", &x1, &y1);
//     printf("Enter the coordinates of the second endpoint of the segment (x2 y2): ");
//     scanf("%f %f", &x2, &y2);

//     // Read the coordinates of the point
//     printf("Enter the coordinates of the point (x y): ");
//     scanf("%f %f", &x, &y);

//     // Check if the point is within the bounds of the segment
//     if ((x <= x1 && x >= x2 || x >= x1 && x <= x2) &&
//         (y <= y1 && y >= y2 || y >= y1 && y <= y2)) {
//         // Check for collinearity using the cross product
//         if ((y2 - y1) * (x - x1) == (y - y1) * (x2 - x1)) {
//             printf("The point is on the segment.\n");
//         } else {
//             printf("The point is not on the segment.\n");
//         }
//     } else {
//         printf("The point is not on the segment.\n");
//     }

//     return 0; // Return 0 to indicate successful completion
// }
