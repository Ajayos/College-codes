#include<stdio.h>
#include<stdlib.h>
void main(){

    int a, b, *pa = &a, *pb = &b;
    printf("Enter numbers: ");
    scanf("%d %d", pa, pb);
   	printf("%d + %d = %d\n", *pa, *pb, *pa+*pb);
   	printf("%d - %d = %d\n", *pa, *pb, *pa-*pb);
   	printf("%d x %d = %d\n", *pa, *pb, *pa * *pb);
   	printf("%d / %d = %d\n", *pa, *pb, *pa / *pb);
    

	
}
