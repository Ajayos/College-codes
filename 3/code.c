#include<stdio.h>
void main()
{
    // np = no.of pens , rp = rate of pen , trp = tottal rate of pens
    // nb = no.of boxes , rb = rate of box , trb = tottal rate of boxes
    // nn = no.of notebooks , rn = rate of notebook , trn = tottal rate of notebooks
    int np,nb,nn,rp,rb,rn,trp,trb,trn,tottal;
    printf("Enter Rate of pen : ");
    scanf("%d",&rp); // inputing rate of pen
    printf("Enter number of pens : ");
    scanf("%d",&np); // inputing no.of pens
    printf("Enter Rate of box : ");
    scanf("%d",&rb); // inputing rate of box
    printf("Enter number of boxes : ");
    scanf("%d",&nb); // inputing no.of boxes
    printf("Enter Rate of notebook : ");
    scanf("%d",&rn); //  inputing rate of notebook
    printf("Enter number of notebooks : ");
    scanf("%d",&nn); // inputing no.of notebooks
    trp = rp * np; // calculate tottal rate of pens
    trb = rb * nb; // calculate tottal rate of boxes
    trn = rn * nn; // calculate tottal rate of notebooks
    tottal = trp + trb + trn; // calculate tottal rate
    printf("\nTottal Rate of Pens = %d ",trp); // printing rate of pens
    printf("\nTottal Rate of Boxes = %d ",trb); // printing rate of boxes
    printf("\nTottal Rate of Notebooks = %d ",trn); //printing rate of Notebooks
    printf("\nTottal Rate = %d \n",tottal); // printing tottal rate
}