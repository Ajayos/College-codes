# **Write a program to add substract divide multipication two numbers and display the result**

---

# Algorithum

```
step 1 : start
step 2 : input number1,number2
step 3 : add = number1 + number2 ,substract = number1 - number2 , 
         multipication = number1 * number2 ,divide = number1 / number2
step 4 : print add, substract, multipication, divide
step 5 : stop

```
---

# Code

 

## c
### save using .c formalt
[> ***Full code*** <](/code.c)<br> 

```
#include<stdio.h>
void main ()
{
    int number1,number2,add,substract,multipication,divide;
    printf("Enter Number1 : ");
    scanf("%d",&number1);
    printf("Enter Number2 : ");
    scanf("%d",&number2);
    add = number1 +number2;
    substract = number1 - number2; 
    multipication = number1 * number2;
    divide = number1 / number2;
    printf("ADD = %d \n",add);
    printf("substract = %d \n",substract);
    printf("multipication = %d \n",multipication);
    printf("divide = %d \n",divide);
}

```

---

# c++
### Save using .cpp formalt
[> ***Full code*** <](/code.cpp)<br> 

```
#include<iostream.h>
using namespace std;
int main()
{
    int number1,number2,add,substract,multipication,divide;
    cin>>"Enter number1">>number1; 
    cin>>"Enter number2">>number2; 
    add = number1 +number2;
    substract = number1 - number2; 
    multipication = number1 * number2;
    divide = number1 / number2;
    cout<<"add = "<<add<<"substract = "<<substract<<"multipication = "<<multipication<<"divide = "<<divide;
    return 0;
}

```

---

## Python
### save using .py formalt
[> ***Full code*** <](/code.py)<br> 

```
number1 =int(input("Enter number1 : ")); 
number2 =int(input("Enter number2 : ")); 
add = number1 +number2;
substract = number1 - number2; 
multipication = number1 * number2;
divide = number1 / number2;
print ("add = ",number1,"+",number2," = ",add);
print ("substract = ",number1,"-",number2," = ",substract);
print ("multipication = ",number1,"*",number2," = ",multipication);
print ("divide = ",number1,"/",number2," = ",divide);

```

---