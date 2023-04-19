#include<stdio.h>
int fibonacci(int);
void main()
{
	int n, m= 0, i;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Fibonacci series terms are:\n");
	for(i = 1; i <= n; i++)
	{
		printf("%d\t",fibonacci(m));
		m++;
	}
}
int fibonacci(int n)
{
	if(n == 0 || n == 1)
	return n;
	else
	return(fibonacci(n-1) + fibonacci(n-2));
}
