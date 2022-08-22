#include<stdio.h>
void main()
{
    int i, n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
       printf("%d ",i);
    }
    printf("\n");
}

/**
 * 4 5 6 7 8 9
 * 1 4 5 5 6 7
 */