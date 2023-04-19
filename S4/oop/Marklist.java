/**
 * CODE BY AJAY O S
 * Create a program to read rollno and mark in 3 subject for a student using a class 'Student' and print his/her marklist along with grade in each subject
 */

// importing Scanner from java.util
import java.util.Scanner;

// starting class
class Marklist {
  // roll number
  int rollNo;
  // marks in each subject
  int[] marks = new int[3];
  // grade in each subject
  String[] grades = new String[3];

    // function for inputting roll number and marks in each subject
    public void input() {
    // Scanner for important marks in each subject
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter roll number: ");
    rollNo = sc.nextInt();
        for(int i = 0; i < 3; i++) {
            System.out.print("Enter marks in subject" + (i+1) + ": ");
            marks[i] = sc.nextInt();
        }
    }

    public void computeGrade() {
      for (int i = 0; i < 3; i++) {
        if (marks[i] >= 60) {
          grades[i] = "First Class";
        } else if (marks[i] >= 50) {
          grades[i] = "Second Class";
        } else if (marks[i] >= 40) {
          grades[i] = "Pass Class";
        } else {
          grades[i] = "Fail";
        }
      }
    }

  public void display() {
    System.out.println("Roll number: " + rollNo);
    for (int i = 0; i < 3; i++) {
      System.out.println("Marks in subject " + (i + 1) + ": " + marks[i] + ", Grade: " + grades[i]);
    }
  }
}

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter number of students: ");
    int n = sc.nextInt();

    Student[] students = new Student[n];
    for (int i = 0; i < n; i++) {
      students[i] = new Student();
      students[i].input();
      students[i].computeGrade();
    }

    System.out.println("Mark List:");
    for (int i = 0; i < n; i++) {
      System.out.println("\nStudent " + (i + 1) + ":");
      students[i].display();
    }
  }
}
