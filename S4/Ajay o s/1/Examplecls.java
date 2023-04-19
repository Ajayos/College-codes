import java.util.Scanner;

class Examplecls {
    String name;
    int age;
    double salary;
    void read () {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter name : ");
        name = input.nextLine();
        System.out.println("Enter age : ");
        age = input.nextInt();
        System.out.println("Enter salary : ");
        salary = input.nextDouble();
    }
    void display () {
        System.out.println("Your name is " + name);
        System.out.println("Your age is " + age);
        System.out.println("Your salary is " + salary);
    }
    public static void main(String args[]) {
        Exmaplecls ob = new Exmaplecls();
        ob.read();
        ob.display();
    }
 }