#include<stdio.h>
void sum(int , int);

void main(){
	int a=0,b=0;
	printf("enter the numbers a and b :");
	scanf("%d %d",&a,&b);
	sum(a,b);
}
void sum(int n, int m) {
	printf("The sum = %d", (n+m));
}
