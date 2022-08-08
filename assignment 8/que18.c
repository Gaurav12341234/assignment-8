/*
           *
         * * *
       * * * * * 
     * * * * * * *
   * * * * * * * * *
     * * * * * * *
       * * * * *
         * * *
           *
*/
#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      i<=(n+1)/2?k++:k--;
        for(j=1;j<=n;j++)
        {
            if(j>=(n+1)/2+1-k&&j<=(n+1)/2-1+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}