#include<stdio.h>
void swap();

void main(){
	int a, b, *pa = &a, *pb = &b;
	printf("Enter 2 numbers to swap: ");
	scanf("%d %d", pa, pb);
	printf("\nBefore swap\na = %d\nb = %d\n", *pa, *pb);
	swap(pa, pb);
	printf("\nAfter swap\na = %d\nb = %d\n", *pa, *pb);
		
}
void swap(int * a, int * b){
	int t = *a;
	*a = *b;
	*b = t;	
}
