#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
     for (int i = 1; i <= num; i++) {
        for (int j = i; j < i + num; j++) {
            printf("%d", j); //print the value of j
        }
        printf("\n");
    }


    return 0;
}