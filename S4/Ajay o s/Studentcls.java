/**
 * CODE BY AJAY O S
 */
import java.util.Scanner;

class Studentcls {
    int rollno;
    int[] marks = new int[3];
    String[] grade = new String[3];
    void read() {
        System.out.println(" Enter roll number & marks for 3 students: ");
        Scanner sc = new Scanner(System.in);
        rollno = sc.nextInt();
        System.out.println(" Enter marks of Roll number " + rollno);
        for (int i = 0; i < marks.length; i++) {
            marks[i] = sc.nextInt();
        }
    }
    void grade() {
        for (int i = 0; i < 3; i++) {
            if(marks[i] >= 90) {
                grade[i] = "S";
            } else if(marks[i] >= 80) {
                grade[i] = "A";
            } else if(marks[i] >= 70) {
                grade[i] = "B";
            } else if(marks[i] >= 60) {
                grade[i] = "C";
            } else if(marks[i] >= 50) {
                grade[i] = "D";
            } else if(marks[i] >= 40) {
                grade[i] = "E";
            }
            else {
                grade[i] = "F";
            }
        }
    }
    public static void main(String args[]) {
        Studentcls sc = new Studentcls();
        sc.read();
        sc.grade();
        System.out.println(" Roll No: " + sc.rollno + " Marks: " + sc.marks[i] + " Grade: " + sc.grade[i]);
    }
}
