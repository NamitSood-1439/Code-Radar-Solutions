#include <stdio.h>

int main() {
    char a;
    printf("");
    scanf("%c", &a);

    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) { 
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || 
            a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else if (a >= '0' && a <= '9') { 
        printf("Digit\n");
    } else {
        printf("Special Character\n"); 
    }

    return 0;
}
