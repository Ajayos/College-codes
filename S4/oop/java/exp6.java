class StaticTest {
   int count=8;
   int multiply(int x,int y) {
	   return(x*y);
   }
   static int add(int x,int y) {
      return (x+y);
   }
}
class exp6 {
   public static void main (String args[]) {
      StaticTest  aj= new StaticTest();
      System.out.println("multiply : "+ aj.multiply(4,4));
      System.out.println("add : "+ StaticTest.add(4,4));
   }
}

