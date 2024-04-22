#include<stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n); 

    for(int i = 1; i <= n; i++) { // Loop for each row
        for(int j = 1; j <= n; j++) { // Loop for each column in the row
            if(j <= i) { // Printing numbers up to i
                if(j != n) 
                    printf("%d", j);
            } else { // Printing underscores after reaching i
                printf("_");
            }
        }

        // Printing underscores after reaching i until the last column
        for(int j = 0; j < (n - 1) - i; j++) {
            printf("_");
        }

        // Printing numbers in reverse order from i to 1
        for(int j = i; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n"); // Moving to the next line after printing each row
    }

    return 0;
}
