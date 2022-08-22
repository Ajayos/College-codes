#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],d[5][5],i,j,r,c;
    printf("ROW SIZE: ");
    scanf("%d",&r);
    printf("COLOUMN SIZE: ");
    scanf("%d",&c);
    printf("Enter elements: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ROW SIZE: ");
    scanf("%d",&r);
    printf("COLOUMN SIZE: ");
    scanf("%d",&c);
    printf("Enter elements: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The difference of the matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}
