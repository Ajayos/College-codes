#include<iostream.h>
using namespace std;
int main()
{
    // np = no.of pens , rp = rate of pen , trp = tottal rate of pens
    // nb = no.of boxes , rb = rate of box , trb = tottal rate of boxes
    // nn = no.of notebooks , rn = rate of notebook , trn = tottal rate of notebooks
    int np,nb,nn,rp,rb,rn,trp,trb,trn,tottal;
    cin>>"Enter Rate of pen : ">>rp; // inputing rate of pen
    cin>>"Enter number of pens : ">>np; // inputing no.of pens
    cin>>"Enter Rate of box : ">>rb; // inputing rate of box
    cin>>"Enter number of boxes : ">>nb; // inputing no.of boxs
    cin>>"Enter Rate of notebook : ">>rn; // inputing rate of notebook
    cin>>"Enter number of notebooks : ">>nn; // inputing no.of notebooks
    trp = rp * np; // calculate tottal rate of pens
    trb = rb * nb; // calculate tottal rate of boxes
    trn = rn * nn; // calculate tottal rate of notebooks
    tottal = trp + trb + trn; // calculate tottal rate
    cout<<"Tottal Rate of Pens = "<<rp<<" * "<<np<<" = "<<trp; // printing rate of pens
    cout<<"Tottal Rate of boxes = "<<rb<<" * "<<nb<<" = "<<trb; // printing rate of boxes
    cout<<"Tottal Rate of notebooks = "<<rn<<" * "<<nn<<" = "<<trn; // printing rate of notebooks
    cout<<"Tottal Rate = "<<trp<<" + "<<trb<<" + "<<trn<<" = "<<tottal; // printing rate
    return 0;
}
