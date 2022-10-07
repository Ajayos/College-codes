#include<stdio.h>
void main()
{
	int a[10],i,n,sum=0;
	printf("Enter the array limit: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		sum=sum+a[i];
	}
	printf("\nSum of elements of the array is %d\n",sum);
}
