interface Area{
	//static final float pi = 3.14F;
	public float compute(float a, float b);
}

class Rectangle implements Area{
	public float compute(float a, float b){
		return (a*b);
	}
}
class Circle implements Area{
	public float compute(float a, float b){
		return (b*a*a);
	}
}

class Exp13{
	public static void main(String args[]){
		Rectangle obj1 = new Rectangle();
		Circle obj2 = new Circle();
		System.out.println("Area of Rectangle = " + obj1.compute(19,2));
		System.out.println("Area of Circle	  = " + obj2.compute(2,3.14F));
	}
}
