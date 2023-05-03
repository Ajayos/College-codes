#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char stack[100];
int top=-1,size;
void push(char item){
if(top>=size-1){
printf("overflow");
}
else{
    top++;
    stack[top]=item;
}
}
char pop(){
    char item;
    if(top<0){
        printf("underflow");
        return '\0';
    }
    else{
        item=stack[top];
        top--;
        return(item);
        }
}
int is_operator(char symbol){
    if(symbol=='^'||symbol=='/'||symbol=='*'||symbol=='%'||symbol=='+'||symbol=='-'){
        return 1; }
        else{
            return 0;
        }
}
int precedence(char symbol){
    if (symbol=='^')
    return 3;
    else if (symbol=='*'||symbol=='/'||symbol=='%')
    return 2;
    else if (symbol=='+'||symbol=='-')
    return 1;
    else
    return 0;
}
 void infixtopostfix(char infix_exp[],char postfix_exp[])   
    {
      int i,j;
      char item,x;
      push('(');
      strcat(infix_exp,")");
      i=0; j=0;
      item=infix_exp[i];
      while (item!='\0'){
        if (item=='('){
            push(item);}
        else if (isdigit(item)||isalpha(item)){
            postfix_exp[j]=item;
            j++;
        }
        else if (is_operator(item)==1){
            x=pop();
            while ((is_operator(x)==1)&&(precedence(x)>=precedence(item)))
            {
              postfix_exp[j]=x;
              j++;
              x=pop(); /* code */
            }
            push(x);
            push(item);
        }
        else if (item==')'){
            x=pop();
            while (x!='(')
            {
               postfix_exp[j]=x;
               j++;
               x=pop(); /* code */
            }}
      
        else{
       printf("\n invalid expression");
       exit(0);/* code */
        } 
    i++;
    item=infix_exp[i];
      }
    postfix_exp[j]='\0';
    }
   void main() {
    char infix[100],postfix[100];
    printf("enter size of stack:");
    scanf("%d",&size);
    printf("enter infix expression:");
    scanf("%s",infix);
    infixtopostfix(infix,postfix);
    printf("postfix Expression:%s",postfix);/* code */
    }
    
