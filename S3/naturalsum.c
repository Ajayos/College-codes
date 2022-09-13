#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("Enter n: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+i;
}
printf("Sum of natural numbers upto %d=%d\n",n,sum);
}
