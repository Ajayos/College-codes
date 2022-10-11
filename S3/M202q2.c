#include<stdio.h>
void main()
{
	int a[10],i,n,j,d;
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
	printf("\nThe sorted array in ascending order is:\n");
	for(i=0;i<n;i++)
	{
		for (j = i + 1; j < n; ++j)
            		{
			if(a[i]>a[j])
			{
				d=a[i];
				a[i]=a[j];
				a[j]=d;
			}
		}
		printf("%d\t",a[i]);
	}
}
