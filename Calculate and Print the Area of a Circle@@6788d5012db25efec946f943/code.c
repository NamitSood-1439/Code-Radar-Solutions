#include <stdio.h>

int main() {
    float b, r;  // Correctly use 'float' for both variables
    scanf("%f", &r);  // Use "%f" for scanning a float
    b = 3.14 * r * r;
    printf("Area: %.2f", b);  // Use "%.2f" for printing a float with 2 decimal places
    return 0;
}
