import java.util.Scanner;

class expob
{
String name;
int age;
double salary;
void read()
{
 Scanner myobj=new Scanner (System.in);
 name=myobj.nextLine();
 age=myobj.nextInt();
 salary=myobj.nextDouble();
}
void display ()
 {
  System.out.println("name: "+name);
  System.out.println("age: "+age);
  System.out.println("salary: "+salary);
 }
public static void main (String args[])
{
  expob obj=new expob();
  obj.read();
  obj.display();
}
}
