class TwoDShape 
{
    int length;
    int height;  
    TwoDShape(int x, int y) 
    {
        length = x;
        height = y;
    }   
    void display() 
    {
        System.out.println("Length: " + length);
        System.out.println("Height: " + height);
    }
}
class Square extends TwoDShape 
{
	Square(int length) 
	{
        	super(length, length);
    	}
    boolean isEqual(int side1, int side2) 
    {
        if(side1 == side2)
        	return true;
        else
        	return false;
    }
}    
class exp9
{
    public static void main(String[] args) 
    {
        Square square = new Square(6);
        square.display();
        int side1 =11;
        int side2 =11;
        boolean result = square.isEqual(side1, side2);
        System.out.println("Side 1 and Side 2 are equal: " + result);
    }
}

