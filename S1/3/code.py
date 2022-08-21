# np = no.of pens , rp = rate of pen , trp = tottal rate of pens
# nb = no.of boxes , rb = rate of box , trb = tottal rate of boxes
# nn = no.of notebooks , rn = rate of notebook , trn = tottal rate of notebooks
rp =int(input("Enter Rate of pen : ")); # inputing rate of pen
np =int(input("Enter number of pens : ")); # inputing no.of pens
rb =int(input("Enter Rate of box : ")); # inputing rate of box
nb =int(input("Enter number of boxes : ")); # inputing no.of boxs
rn =int(input("Enter Rate of notebook : ")); # inputing rate of notebook
nn =int(input("Enter number of notebooks : ")); # inputing no.of notebooks
trp = rp * np; # calculate tottal rate of pens
trb = rb * nb; # calculate tottal rate of boxes
trn = rn * nn; # calculate tottal rate of notebooks
tottal = trp + trb + trn; # calculate tottal rate of all items
print("Tottal Rate of Pens = ",rp," * ",np," = ",trp); # printing rate of pens
print("Tottal Rate of boxes = ",rb," * ",nb," = ",trb); # printing rate of boxes
print("Tottal Rate of notebooks = ",rn," * ",nn," = ",trn); # printing rate of notebooks
print("Tottal Rate = ",trp," + ",trb," + ",trn," = ",tottal); # printing rate
