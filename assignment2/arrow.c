//question-1(c)
#include<stdio.h>
int main()
{
    int i,j=0,n,k=0,m,o;
    scanf("%d",&n);
    m=n*n;
    o=m/2;
    printf("%d\n",o);
    for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
            {
                if(j>=o-i&&j<=o+i)
                printf("*");
                else
                printf(" ");

            }
            printf("\n");
    }
    for(;i<m;i++)
    {
            for(j=0;j<m;j++)
            {
                if(j==o)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
    }
}
