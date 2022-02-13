#include<stdio.h>
void main ()
{
    int number1,number2,add,subtract,multipication,divide; /// inputing environments
    printf("Enter Number1 : "); 
    scanf("%d",&number1); /// inputing number1
    printf("Enter Number2 : "); 
    scanf("%d",&number2); /// inputing number2
    add = number1 +number2; /// adding number1 and number2
    subtract = number1 - number2; ///subtract number1 and number2 
    multipication = number1 * number2; /// multiplying number1 and number2
    divide = number1 / number2; /// divide number1 and number2
    printf("ADD = %d \n",add); /// printing adding result
    printf("subtract = %d \n",subtract); //// printing subtract result
    printf("multipication = %d \n",multipication); /// printing multipication result
    printf("divide = %d \n",divide); /// printing divider result
}