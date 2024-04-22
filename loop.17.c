#include<stdio.h>
int main ()
{
   int n;
   printf("Enter the value of N : ");
   scanf("%d", &n);
   for(int i =1;i<=n;i++)
   {
       for(int j =1; j<=n;j++)
       {
           if(i+j==n/2+2||i==(n/2+1)||j==(n/2+1)||j-i==n/2||i-j==n/2||i+j==(n*2)-n/2) //condition for print $
            printf("$");
           else
            {
             printf("_"); //print underscor
            }

       }printf("\n");
   }
   return 0;
}
