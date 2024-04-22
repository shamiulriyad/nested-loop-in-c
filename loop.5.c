#include<stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = n;
        for (int j = 1; j <= i; j++) {
            printf("%d", num--);    // Print the current number and decrement it
        }
        printf("\n");
    }
    return 0;
}