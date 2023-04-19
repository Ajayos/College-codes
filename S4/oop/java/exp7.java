class Block {
    int a,b,c,Volume;
     Block(int x,int y,int z) {
          a=x;
          b=y;
          c=z;
          Volume=a*b*c;
     }
     boolean sameBlock(Block Block1) {
          if ((a==Block1.a) & (b==Block1.b) & (c==Block1.c))
               return true ;
          else
               return false;
     }
      boolean sameVolume(Block Block1)
{
        if (Volume==Block1.Volume)
            return  true;
     else
           return false;
            }
}
class exp7 {
     public static void main(String args[]) {
          Block a1=new Block(10,2,5);
          Block a2=new Block(10,2,5);
          Block a3=new Block(4, 5,5);
          System.out.println("a1 & a2 has same dimension "+a1.sameBlock(a2));
          System.out.println("a1 & a3 has same dimension "+a1.sameBlock(a3));
          System.out.println("a1 & a3 has same volume "+a1.sameBlock(a3));
     }
}

