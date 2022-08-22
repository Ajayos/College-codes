#include<stdio.h>
void main()
{
    int a[5][5], r, c, i, j;
    printf("Enter r and c : ");
    scanf("%d %d",&r,&c);
    printf("Enter elements : ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nElements are : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}

/**
 * 4 5 6 7 8 9
 * 1 4 5 5 6 7
 */