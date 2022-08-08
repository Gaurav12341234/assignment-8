/*
    1 2 3 4 3 2 1
      1 2 3 2 1
        1 2 1
          1
*/
#include<stdio.h>
int main()
{
    int i,k,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i&&j<=2*n-i)
            {
                printf("%d",k);
                if(j<n)
                    k++;
                else
                    k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}