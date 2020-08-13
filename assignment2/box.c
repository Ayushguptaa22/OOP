//question-1(a)

#include<stdio.h>
int main()
{
int i,j,n;
printf("enter no.");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("*");
}
printf("\n");
for(i=0;i<n-2;i++)
{
for(j=0;j<n;j++)
{
if(j==0)
printf("*");
else if(j==n-1)
printf("*\n");
else
printf(" ");
}
}
for(i=0;i<n;i++)
{
printf("*");
}
}
