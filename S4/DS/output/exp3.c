#include<stdio.h>
#include<string.h>
int stack[100],top=-1;
void push(char);
void display();
void main()
{
	char name[100];
	printf("Enter The String TO Be Reversed  :");
	scanf("%s",name);
	
	for(int i=0;i<strlen(name);i++)
		{
		push(name[i]);
		}
		
		display();
}

void push(char c)
	{
	if(top==30)
		{
		printf("The Stack Is Full");
		}
	else
		{
		top++;
		stack[top]=c;
		}
	}
	
void display()
	{
	printf("The Reversed String Is \n");
		for(int i=top;i>=0;i--)
			{
			printf("%c",stack[i]);
			}
			printf("\n");
	}
	
