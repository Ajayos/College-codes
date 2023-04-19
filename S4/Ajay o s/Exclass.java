/**
 * CODE BY AJAY O S
 */
 import java.util.Scanner;

class Exclass {
    String name;
    int age;
    double salary;
    void read () {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter name : ");
        name = in.nextLine();
        System.out.println("Enter age : ");
        age = in.nextInt();
        System.out.println("Enter salary : ");
        salary = in.nextDouble();
    }
    void display () {
        System.out.println("Your name is " + name);
        System.out.println("Your age is " + age);
        System.out.println("Your salary is " + salary);
    }
    public static void main(String args[]) {
        Exclass obj = new Exclass();
        obj.read();
        obj.display();
    }
 }