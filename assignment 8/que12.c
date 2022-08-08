/*
    A B C D C B A
      A B C B A
        A B A
          A
*/
#include<stdio.h>
int main()
{
    int n,k,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k='A';
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i&&j<=2*n-i)
            {
                printf("%c",k);
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