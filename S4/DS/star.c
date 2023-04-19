#include<stdio.h>
#include<stdlib.h>
#define max 30
int stack[max],top=-1;
void push();
void pop();
void peek();
void display();
void main() {
int choice;
do{
	
	printf("\n\n---MENU---\n\n");
	printf("\n 1_push\n 2_pop\n 3_peek\n 4_display\n 5_exit\n \n ENTER YOUR CHOICE : \n\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1 : push();
	break;
	case 2 : pop();
	break;
	case 3 : peek();
	break;
	case 4 : display();
	break;
	case 5 : exit(0);
	break;
	default: printf("wrong choice\n");
	break;
	}
  }
  while(choice<=5);
  }
  void push()
  	  {
	   int value;
	   printf("ENTER THE VALUE : \n");
	   scanf("%d",&value);
	   
	   if(top==(max-1))
	   {
	   printf("STACK IS FULL\n");
	   }
	   else
	   {
	   top++;
	   stack[top]=value;
	   }
	  }
  void pop()
  	{
  	if(top==-1)
  	  {
  		  printf("UNDERFLOW\n");
  	  }
  	  else
  	  {
  		  int value=stack[top];
  		  top--;
  		  printf("THE DELETED ELEMENT IS %d\n\n",value);
  	  }
  	}
  void peek()
  	{
  	if(top==-1)
  	  {
  	  printf("STACK IS EMPTY\n");
  	  }
  	  else
  	  {
  	  printf("TOP ELEMENT = %d\n",stack[top]);
  	  }
  	}
  void display()
  	{
  		printf("THE ELEMENTS IN THE STACK IS");
  		for(int i=top;i>0;i--)
  	  {
  	 	 printf("%d\t",stack[i]);
  	  }

  	}

