#include<stdio.h>

int main()
{
    int n,i,j;

    printf("enter odd int num");
    scanf("%d",&n);

    for(i=1; j<=n; j++){    //print z condition
        for(j=1; j<=n; j++){
            if(i==1 || i=+n || i+j ==n+1){
                printf("Z");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}