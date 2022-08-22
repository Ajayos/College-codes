#include<stdio.h>
void main()
{
    int a[5][5],r,c,i,j,sum=0;
    printf("Row size: ");
    scanf("%d",&r);
    printf("Colounm size: ");
    scanf("%d",&c);
    printf("Enter elements: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i>j)
                sum=sum+a[i][j];
            }
        }
        printf("Sum of lower diagonal element is %d ",sum);
    }
    else
        {printf("Not a square matrix");}
}
