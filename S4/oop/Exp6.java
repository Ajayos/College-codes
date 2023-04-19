/**
 * CODE BY AJAY O S
 * Write a java program to call a static method
 *
 * Create a Class 'statictest' having an instance method multiply (int x, int y) and a static method add (int x, int y)
 * Both methods returns the result and display it inside the main method
 * Call both methods inside the main using proper refrence
 */

class StaticTest {
 	static int val= 8;
    int multiply(int x, int y) { // multiply
        return (x*y);
    }
    static int add(int x, int y) { // add
    	System.out.println("inside : " + val);
        return (x+y);
    }
}
class Exp6 {
    public static void main(String[] args) {
        StaticTest mk = new StaticTest();
        System.out.println("int    test : " + mk.multiply(5,8));
        System.out.println("Static test : " + StaticTest.add(5,8));
    }
}