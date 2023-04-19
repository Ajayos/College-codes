#include<stdio.h>
#include<stdlib.h>

void main(){
	int n, i, *arr;
	printf("Enter a number: ");
	scanf("%d", &n);
	arr = malloc(n * sizeof(int));
	printf("\nEnter array\n");
	for(i = 0;i < n;i++){
		scanf("%d", arr+i);
	}
	int sum = 0;
	printf("\nArray = \n");
	for(i = 0;i < n;i++){
		printf("%d\t", *(arr+i));
		if(*(arr+i) % 2 == 0)
			sum += *(arr+i);
	}
	printf("\n\n");
	printf("Sum = %d\n\n", sum);
	
}

