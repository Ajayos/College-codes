#include<stdio.h>
void main()
{
 int i,num,n,largest=0;
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  scanf("%d",&num);
  if(num>largest)
   largest=num;
 }
 printf("The largest number is %d\n",largest);
}
  
