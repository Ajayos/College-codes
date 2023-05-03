#include<stdio.h>
#define max 100
int queue[max],front=-1,rear=-1;
void push(int);
int pop();
void main()
{
  int num ;
  printf("Enter The Number =");
  scanf("%d",&num);
    do{
         int rem=num%10;
         push (rem);
         num/=10;
      }
      	  while(num>0);
      	  printf("The Reverse Of The Number Is =  ");
      	  while(front<=rear){
      	  printf("%d\t",pop() );
      }
}
void push(int n){
if (rear==-1){
front=rear=0;
}
   else 
        {
          rear++;
   }
   	  queue[rear]=n;
  }
int pop(){
      if (front==-1)
      	printf("The Queue Is Empty : \n");
      else
         {
        int temp = queue [front];
        front++;
        return temp;
       }
}
        
