#include<stdio.h>
int sum();

void main(){
	sum();
	}
	
int sum(){
	int a,b;
	printf("Enter a and b :");
	scanf("%d %d",&a,&b);
	printf("sum = %d",a+b);
}
