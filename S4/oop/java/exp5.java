class StaticVariable{
	int count1=0;
	static int count2=0;
	StaticVariable(){
		count1++;
		count2++;
		
	}

}
class exp5{
	public static void main(String args[]){
	
		StaticVariable aj= new StaticVariable();
		System.out.println("Instance Variable: " + aj.count1);
		System.out.println("Static Variable: " + aj. count2);
		
		StaticVariable ajm = new StaticVariable();
		System.out.println("Instance Variable: " + ajm.count1);
		System.out.println("Static Variable: " + ajm.count2);
		
		StaticVariable ajmal= new StaticVariable();
		System.out.println("Instance Variable: " + ajmal.count1);
		System.out.println("Static Variable: " + ajmal.count2);
				
	} 
}
