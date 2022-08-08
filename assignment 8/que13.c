/*
    A B C D E F G F E D C B A
    A B C D E F   F E D C B A
    A B C D E       E D C B A
    A B C D           D C B A
    A B C               C B A
    A B                   B A
    A                       A
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k='A';
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n+1-i||j>=n-1+i)
            {
                printf("%c",k);
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