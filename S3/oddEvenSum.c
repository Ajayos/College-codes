#include<stdio.h>
void main()
{
 int num,n,i,evensum=0,oddsum=0;
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&num);
  if(num%2==0)
  evensum=evensum+num;
  else
  oddsum=oddsum+num;
 }
 printf("The evensum is %d\n",evensum);
 printf("The oddsum is %d\n",oddsum);
}
