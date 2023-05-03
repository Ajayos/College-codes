#include<stdio.h>
#define max 30
int stack[max],top=-1;
void push(int stack[],int);
void display();
void main()
	{
	int n,rem;
	printf("ENTER THE NUMBER TO BE CONVERTED :");
	scanf("%d",&n);
	
	while(n>0)
	  {
	  	rem=n%2;
	  	push(stack,rem);
	  	n=n/2;
	  
	  }
	  display();
	  }
	  	void push(int stack[],int rem)
	  		{
	  		if(top==(max-1))
	  			{
	  			printf("THE STACK IS FULL\n");
	  			}
	  		else
	  			{
	  			top++;
	  			stack[top]=rem;
	  			}
	  		}
	  	void display()
	  		{
	  		printf("BINARY NUMBER :");
	  			for(int i=top;i>=0;i--)
	  				{
	  				printf("%d\t",stack[i]);
	  				}
	  		}
	
