#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

char stack[100];
	{
		int top--1,size;
		void push(char item)
		
		if(top>=size-1)
			{
			printf("OVERFLOW");
			}
		else
			{
			top++;
			stack[top] = item;
			}
	}
//////////////////////////////////////////////////////////////
char pop()
	{
		char item;
		if(top<0)
			{
			printf("UNDERFLOW");
			}
		else
			{
			item = stack[top];
			top--;
			return(item)
			}

	}
//////////////////////////////////////////////////////////////
int is_operator(char symbol)
	{
		if(symbol=='^'||symbol=='/'||symbol=='*'||symbol=='%'||symbol=='+'||symbol=='-')
			{
			return 1;
			}
		else
			{
			return 0;
			}
	}
//////////////////////////////////////////////////////////////
int prior(char symbol)
	{
		if(symbol=='^')
		{
		return 3;
		}
	else if(symbol=='*'||symbol=='/'||symbol=='%')
		{
		return 2;
		}
	else if(symbol=='+'||symbol=='-')
		{
		return 1;
		}
	else
		{
		return 0;
		}
	}
//////////////////////////////////////////////////////////////
void intopo(char in_exp[], char post_exp[])
	{
	int i,j;
	char item,x;
	}
