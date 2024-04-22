#include <stdio.h>

int main() {
    int n; 
    printf("Enter the value of n: ");
    scanf("%d", &n); 

    // Loop for the first half of the pyramid
    for (int i = 1; i <= n / 2 + 1; i++) {
        // Loop for printing underscores
        for (int j = 0; j < n / 2 + 1 - i; j++) {
            printf("_");
        }
        // Loop for printing * (first half)
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        // Loop for printing * (second half)
        for (int j = 1; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Loop for the second half of the pyramid
    for (int i = n / 2; i >= 1; i--) {
        // Loop for printing underscores
        for (int j = n / 2 + 1 - i; j > 0; j--) {
            printf("_");
        }
        // Loop for printing * (first half)
        for (int j = i; j > 0; j--) {
            printf("*");
        }
        // Loop for printing * (second half)
        for (int j = i; j > 1; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

