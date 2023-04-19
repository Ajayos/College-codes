#include<stdio.h>
int sum_of_digits(int);
int rev(int);
void main()
{
  int num,c,d;
  printf("Enter the number: ");
  scanf("%de",&num);
  c=sum_of_digits(num);
  d=rev(num);
  printf("The sum of digits of the number is %d\n",c);
  printf("The reverse of the given number is %d\n",d);
}
int rev(int num)
{
  int rem,rev=0;
  while(num>0)
  {
    rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
  }
  return rev;
}
int sum_of_digits(int num)
{
  int x,sum=0;
  while(num>0)
  {
    x=num%10;
    sum=sum+x;
    num=num/10;
  }
  return sum;
}
