#include <stdio.h>

int main() {
    int n;
    int i, j;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if((i + j) % 2 == 0)    //even num check
                printf("1 ");       //even
            else
                printf("0 ");       //odd
        }
        printf("\n");
    }

    return 0;
}
