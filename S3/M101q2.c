#include<stdio.h>
void main()
{
	int a,b,c,d,e,sum;
	float average;
	printf("Enter the five numbers: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	average=(float)sum/5;
	printf("Average of the 5 numbers=%f",average);
}
