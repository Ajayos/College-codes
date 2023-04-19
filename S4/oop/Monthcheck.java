package check;
public class Monthcheck {
    public static void printMonth(int n) {
        String[] months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        if (n >= 0 && n <= 12) {
        
            System.out.println(months[n - 1]);
        }
        else {
            System.out.println("Invalid month number!");
        }
    }
}
