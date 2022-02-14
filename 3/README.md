# **Write a program to print bill of shop**

---

# Algorithum

```
step 1 : start
step 2 : input rate of pen, no.of pens, rate of box, no.of boxs, rate of notebook, no.of notebooks
step 3 : tottal rate of pens = rate of pen * no of pens, tottal rate of boxes = rate of box * no of boxes,
         tottal rate of notebooks = rate of notebook * no of notebooks
step 4 : print tottal rate of pens, tottal rate of boxs, tottal rate of notebooks and tottal rate
step 5 : stop

```
---

# Code

 

## c
### save using .c formalt
[> ***Full code*** <](https://github.com/Ajay-o-s/Collage-codes/blob/main/3/code.c)<br> 

```
#include<stdio.h>
void main ()
{
   int np,nb,nn,rp,rb,rn,trp,trb,trn,tottal;
    printf("Enter Rate of pen : ");
    scanf("%d",&rp);
    printf("Enter number of pens : ");
    scanf("%d",&np);
    printf("Enter Rate of box : ");
    scanf("%d",&rb);
    printf("Enter number of boxes : ");
    scanf("%d",&nb);
    printf("Enter Rate of notebook : ");
    scanf("%d",&rn);
    printf("Enter number of notebooks : ");
    scanf("%d",&nn);
    trp = rp * np; 
    trb = rb * nb;
    trn = rn * nn;
    tottal = trp + trb + trn;
    printf("\nTottal Rate of Pens = %d ",trp);
    printf("\nTottal Rate of Boxes = %d ",trb);
    printf("\nTottal Rate of Notebooks = %d ",trn);
    printf("\nTottal Rate = %d \n",tottal);
}

```

---

# c++
### Save using .cpp formalt
[> ***Full code*** <](https://github.com/Ajay-o-s/Collage-codes/blob/main/3/code.cpp)<br> 

```
#include<iostream.h>
using namespace std;
int main()
{
    int np,nb,nn,rp,rb,rn,trp,trb,trn,tottal;
    cin>>"Enter Rate of pen : ">>rp;
    cin>>"Enter number of pens : ">>np;
    cin>>"Enter Rate of box : ">>rb;
    cin>>"Enter number of boxes : ">>nb;
    cin>>"Enter Rate of notebook : ">>rn;
    cin>>"Enter number of notebooks : ">>nn;
    trp = rp * np;
    trb = rb * nb;
    trn = rn * nn;
    tottal = trp + trb + trn; // calculate tottal rate
    cout<<"Tottal Rate of Pens = "<<rp<<" * "<<np<<" = "<<trp;
    cout<<"Tottal Rate of boxes = "<<rb<<" * "<<nb<<" = "<<trb;
    cout<<"Tottal Rate of notebooks = "<<rn<<" * "<<nn<<" = "<<trn;
    cout<<"Tottal Rate = "<<trp<<" + "<<trb<<" + "<<trn<<" = "<<tottal;
    return 0;
}


```

---

## Python
### save using .py formalt
[> ***Full code*** <](https://github.com/Ajay-o-s/Collage-codes/blob/main/3/code.py)<br> 

```
rp =int(input("Enter Rate of pen : "));
np =int(input("Enter number of pens : "));
rb =int(input("Enter Rate of box : "));
nb =int(input("Enter number of boxes : "));
rn =int(input("Enter Rate of notebook : "));
nn =int(input("Enter number of notebooks : "));
trp = rp * np;
trb = rb * nb;
trn = rn * nn;
tottal = trp + trb + trn;
print("Tottal Rate of Pens = ",rp," * ",np," = ",trp);
print("Tottal Rate of boxes = ",rb," * ",nb," = ",trb);
print("Tottal Rate of notebooks = ",rn," * ",nn," = ",trn);
print("Tottal Rate = ",trp," + ",trb," + ",trn," = ",tottal);


```

---