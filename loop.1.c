#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    // loop each row 
    for(int i=1; i<=num;i++){
        for(int j=1; j<=num ; j++){
            printf("%d", j); //print the value of j
        }
        printf("\n");
    }


    return 0;
}
