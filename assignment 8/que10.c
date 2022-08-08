/*
    1 2 3 4 3 2 1
    1 2 3   3 2 1
    1 2       2 1
    1           1
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n+1-i||j>=n-1+i)
            {
                printf("%d",k);
                if(j<n)
                    k++;
                else
                    k--;
            }
            else
            {
                printf(" ");
                if(j<n)
                    k++;
                else
                    k--;
            }
        }
        printf("\n");
    }
    return 0;
}