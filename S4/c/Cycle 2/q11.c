#include<stdio.h>
void addArray();
void main(){
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int a[n], b[n];
	printf("Enter first array\n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("Enter second array\n");
	for(i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	printf("first array\n");
	for(i = 0; i < n; i++){
		printf("%d\t", a[i]);
	}
	printf("\nsecond array\n");
	for(i = 0; i < n; i++){
		printf("%d\t", b[i]);
	}
	printf("\nSum of array is \n");
	addArray(a,b,n);

}

void addArray(int a[],int b[], int n){
	for(int i=0;i<n;i++){
		printf("%d\t", a[i]+b[i]);
		}
	printf("\n");
}
