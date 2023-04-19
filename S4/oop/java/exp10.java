class Car {
	void vehicleType() {
		System.out.println("Vehicle type:Car");
	}
}
class Maruti extends Car {
	void brand() {
		System.out.println("Brand:Maruti");
	}
	void speed() {
		System.out.println("Maximum speed:90km/hr");
	}
}
class Maruti800 extends Maruti {
	void Maruti800() {
		System.out.println("Model:Maruti800");
	}
	void speed() {
		System.out.println("Maximum Speed:80km/hr");
	}
}
class exp10 {
	public static void main(String args[]) {
		Maruti800 m8 = new Maruti800();
		m8.vehicleType();
		m8.brand();
		m8.speed();
	}
}
