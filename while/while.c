#include<stdio.h>
void main ()
{
   int n,i=1;
   printf("ENTER A NUMBER : ");
   scanf("%d",&n);
   while(i<=n)
    {
      printf("%d, ",i);
      i+=1;  // or use i+=1;
   }
  }
