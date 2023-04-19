#include<stdio.h>
void main()
{
	int r,c,i,j,a[5][5];
	printf("Enter the row and coloumn limit: ");
	scanf("%d %d",&r,&c);
	printf("Enter the elements in the matrix: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
