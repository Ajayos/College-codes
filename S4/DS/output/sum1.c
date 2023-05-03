#include<stdio.h>
int sum(int , int);

void main(){
	int a,b,c;
	printf("Enter a and b :");
	scanf("%d %d",&a,&b);
	c=sum(a,b);
	printf("sum = %d",c);
}
int sum(int x , int y){
	return x+y;
}
