class MethodOverloading
{
	int add(int a,int b)
	{
		return a+b;
	}
	double add(double a,double b)
	{
		return a+b;
	}
	int add(int a,int b,int c)
	{
		return a+b+c;
	}
}
class Exp11
{
	public static void main(String args[])
	{
		MethodOverloading a1=new MethodOverloading();
		MethodOverloading a2=new MethodOverloading();
		MethodOverloading a3=new MethodOverloading();
		System.out.println("Sum of two integers: "+a1.add(4,6));
		System.out.println("Sum of two double: "+a2.add(2.6,8.5));
		System.out.println("Sum of three integers: "+a3.add(5,8,23));
	}
}
