# CODE FOR DO WHILE 

```
#include<stdio.h>
void main ()
{
   int n,i=1;
   printf("ENTER A NUMBER : ");
   scanf("%d",&n);
   do 
    {
      printf("%d, ",i);
      i=i+1;  // or use i+=1;
   }
  while(i<=n);
}
  ```
