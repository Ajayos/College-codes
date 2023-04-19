package check;

public class DayCheck {
    public static void printDay(int n) {
        String[] days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if (n >= 1 && n <= 7){
            
            System.out.println(days[n- 1]);
        } 
        else {
			System.out.println("Invalid day number!");            
        }
     }
}