#include<stdio.h>
void main()
{
	int a[5][5], b[5][5], i, j, r, c;
	printf("Enter the r and c : ");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("The transpose of the matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[i][j]=a[j][i];
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
