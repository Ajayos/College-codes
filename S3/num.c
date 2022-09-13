#include<stdio.h>
void main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
if(num>0)
printf("1\n");
else if(num==0) 
printf("0\n");
else
printf("-1\n");
}
