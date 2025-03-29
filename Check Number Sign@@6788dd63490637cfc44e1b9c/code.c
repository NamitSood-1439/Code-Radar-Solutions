#include <stdio.h>

int main() {
    int a;
    // printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0) {   // Check for all positive numbers
        printf("Positive");
    } else if (a == 0) {
        printf("Zero");
    } else {
        printf("Negative");  // Fixed spelling and syntax
    }

    return 0;
}
