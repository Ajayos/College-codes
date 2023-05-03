#include<stdio.h>
int sum();

void main(){
	int c;
	c=sum();
	printf("sum = %d",c);
}
int sum(){
	int a,b;
	printf("Enter a and b :");
	scanf("%d %d",&a,&b);
	return a+b;
}
