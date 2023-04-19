class Car 
{
    void vehicleType() 
    {
        System.out.println("Vehicle type: Car");
    }
}
class Maruti extends Car 
{
    void brand() 
    {
        System.out.println("Brand: Maruti");
    }
    void speed() 
    {
        System.out.println("Maximum speed: 90 km/hr");
    }
}
class Maruti800 extends Maruti 
{
    Maruti800() 
    {
        System.out.println("Model: Maruti 800");
    }
    void speed()
     {
        System.out.println("Maximum speed: 80 km/hr");
     }
}
class Exp10 
{
    public static void main(String args[]) 
    {
        Maruti800 maruti800 = new Maruti800();
        maruti800.vehicleType();
        maruti800.brand();
        maruti800.speed();
    }
}

