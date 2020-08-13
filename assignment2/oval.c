//question-1(2)

#include<stdio.h>
int main()
{
    int i,n,o,k=0,j=0;
    printf("enter no.");
    scanf("%d",&n);
       o=n/2;
       for(i=0;i<n;i++)
       {
           if(i>=0&&i<=2)
           {
            printf(" ");
           }
           if(i>=3&&i<n-6+3)
           {
            printf("*");
           }
           if(i>=n-3)
           printf(" ");
       }
       printf("\n");

       for(i=0;i<n-1;i++)
       {
           if(i==1||i==n-2)
            printf("*");
           else if((i==2||i==n-3)&&i%2==0)
            printf(" ");
            else
                printf(" ");
       }
       printf("\n");
       for(j=2;j<n-2;j++)
       {
           for(i=0;i<n;i++)
           {
               if(i==0||i==n-1)
            printf("*");
            else
                printf(" ");
           }
           printf("\n");
       }
       if(j==n-2)
       {
           j++;
           for(i=0;i<n-1;i++)
       {
           if(i==1||i==n-2)
            printf("*");
           else if(i==2||i==n-3)
            printf(" ");
            else
                printf(" ");
       }
       printf("\n");
       }
       if(j==n-1)
       {
       for(i=0;i<n;i++)
       {
           if(i>=0&&i<=2)
           {
            printf(" ");
           }
           if(i>=3&&i<n-3)
           {
            printf("*");
           }
           if(i>=n-3)
           printf(" ");
       }

       }
       printf("\n");
    }


