#include<stdio.h>
#include<string.h>

char stack[100];
void push(char);
void display();
int top= -1;

void main()
{
	char str[100];
	printf(" > ENTER THE STRING TO BE REVERSED : ");
	scanf("%s",str);
	int ln = strlen(str);
	for(int i=0;i<ln;i++)
	{
		push(str[i]);
	}
	display();
}

void push(char c){
	top++;
	stack[top] = c;
}

void display(){
	printf(" > THE REVERSED STRING IS : ");
	for(int i=top;i>=0;i--)
	{
	printf("%c",stack[i]);	
	}	
	printf("\n");
	
}

