#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);


    for (int i = n; i >= 1; --i) {  // decreasing and go to next loop
 
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}
