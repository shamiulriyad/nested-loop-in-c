#include<stdio.h>

int main()
{

    int n, i,j ;
    printf("enter odd int num ");
    scanf("%d",&n);

    while(n%2 == 0){
        printf("wrong num!");
        printf("enter odd int num ");
        scanf("%d",&n);

    } 
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++){
            if(i== (n/2)+1 || j == 1 || j== n){  //condition for print H
                printf("H");
            }
            else{
                printf(" "); //PRint space
            }
        }
        printf("\n");
    }
}