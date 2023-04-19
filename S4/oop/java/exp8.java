class Time
{
	private int hour, minute, seconds;
	Time(int H, int M, int S)
	{
		hour=H;
		minute=M;
		seconds=S;
	}
	Time add(Time other)
    {
        int newHour = hour + other.hour;
        int newMinute = minute + other.minute;
        int newSeconds = seconds + other.seconds;

        if (newSeconds >= 60) 
        {
            newSeconds -= 60;
            newMinute += 1;
        }

        if (newMinute >= 60) 
        {
            newMinute -= 60;
            newHour += 1;
        }

        if (newHour >= 24) 
        {
            newHour -= 24;
        }

        Time temp = new Time(newHour, newMinute, newSeconds);
        return temp;
    }
    void display() 
    {
        System.out.println(hour+":"+minute+":"+seconds);
    }
}
class exp8
{
    public static void main(String args[]) 
    {
        Time t1 = new Time(8, 30, 00);
        Time t2 = new Time(1, 15, 45);
        Time t3 = t1.add(t2);
        System.out.print("t1: ");
        t1.display();
        System.out.print("t2: ");
        t2.display();
        System.out.print("t3: ");
        t3.display();
    }
}
