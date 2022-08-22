#include<stdio.h>
void main()
{
    int a[5][5], b[5][5], d[5][5], r, c, i, j; // variable
    printf("Enter r and c : ");
    scanf("%d %d",&r,&c);
    printf("Enter elements a : ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    } // first 

    printf("\nEnter elements b : ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    } // 2

    printf("\naddition output : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            d[i][j] = a[i][j]+b[i][j];
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}
