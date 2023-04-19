/**
 * CODE BY AJAY O S
 * Write a java program to implement the differents between instance and static variable
 *
 * The class 'static variable' contains fields an instance variable 'count1' of integer type and a static variable 'count2' of integer type. 
 * initialise both variables to zero create 3 objects of class Static variable inside another class.
 * Display the values of count 1 and count 2 after incremention using default constructor.
 */

class StaticVariable {
	int count1=0; // count 1
	static int count2=0; // count 2
	StaticVariable() {
		count1++; // increment the value of count 1
		count2++; // increment the value of count 2
		System.out.println("OBJ Instance Varible: " + count1); // outputing the instance varible => output the value of count 1
		System.out.println("OBJ Static   Varible: " + count2); // outputing the static   varible => output the value of count 2
	}

}
class StaticTwo {
	public static void main(String[] args) {
		StaticVariable o1 = new StaticVariable(); // output 1 => o1
		StaticVariable o2 = new StaticVariable(); // output 2 => 02
		StaticVariable o3 = new StaticVariable(); // output 3 => 03
		
	} 
}
