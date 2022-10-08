#include<stdio.h>
int fact(int);
void main()
{
	int num,f;
	printf("Enter n: ");
	scanf("%d",&num);
	f=fact(num);
	printf("Factorial=%d\n",f);
}
int fact(int num)
{
	if(num==0)
	return 1;
	else if(num==1)
	return 1;
	else if(num<0)
	{
		printf("Factorial doesn't exist for negative numbers\n");
		return 0;
	}
	else
	return num*fact(num-1);
}
