#include<stdio.h>
void main(){
	int n, num[20], i, j, a;
	printf("Enter A Number: ");
	scanf("%d", &n);
	printf("Enter Numbers\n");
	for (i=0;i<n;i++){
		scanf("%d", &num[i]);
	}
	printf("Your array is \n");
	for (i=0;i<n;i++){
		printf(" %d  ", num[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if (num[j] > num[j+1]){
				a = num[j];
				num[j] = num[j+1];
				num[j+1] = a;
			}
		}
	}
	printf("Your sorted array is \n");
	for (i=0;i<n;i++){
		printf(" %d  ", num[i]);
	}
	printf("\n");
}
