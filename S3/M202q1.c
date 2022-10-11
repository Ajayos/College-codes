#include<stdio.h>
void main()
{
	int a[10],i,n,num,d=0;
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
	}
	printf("\nEnter the number to be searched: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{d=1; break;}
	}
	if(d==1)
	printf("Element is found in the %d position\n",i+1);
	else
	printf("Element is not found\n");
		
		
}
