#include<stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter an odd integer number: ");
    scanf("%d", &n); 
    // Checking if the entered number is odd
    while(n % 2 == 0) {
        printf("Wrong number: ");
        scanf("%d", &n);
    }

    // Loop to print the square pattern
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
           
            if(i % 2 == 1 || j == 1 || j == n) {
                printf("*");
            } else {
                printf("_"); // Print underscores 
            }
        }
        printf("\n");
    }
    
    return 0;
}
