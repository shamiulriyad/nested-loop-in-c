#include <stdio.h>

int main()
{
    int n,i, j;
    printf("enter odd int num ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
        }
}
