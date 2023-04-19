class Employee {
	double salary=50000;
	void displaySalary() {
		System.out.println("Salary: "+salary);
	}
}
class PermanantEmployee extends Employee {
	double hike=0.5;
	void incrementSalary() {
		salary+=salary*hike;
	}
}
class PartTimeEmployee extends Employee {
	double hike=0.25;
	void incrementSalary() {
		salary+=salary*hike;
	}
}
class exp12 {
	public static void main(String args[]) {
		PermanantEmployee e1=new PermanantEmployee();
		PartTimeEmployee e2=new PartTimeEmployee();
		e1.displaySalary();
		e2.displaySalary();
		e1.incrementSalary();
		e2.incrementSalary();
		e1.displaySalary();
		e2.displaySalary();
	}
}
