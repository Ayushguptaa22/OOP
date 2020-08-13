//question-1(4)

#include<stdio.h>
int main()
{
    int i,j,k=0,n,m,o;
    scanf("%d",&n);

    o=n/2;
    for(i=0;i<o;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==o-i||j==o+i)
                printf("*");
            else
                printf(" ");

        }
            printf("\n");
    }
    if(i==o)
    {
       for(j=0;j<n;j++)
        {
            if(j==0||j==n-1)
                printf("*");
            else
                printf(" ");
        }
            printf("\n");
    }
    for(i=o+1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i-o||j==n-(i-o)-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
