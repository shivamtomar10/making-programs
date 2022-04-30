import java.util.Scanner;
class Student{
    // method overloading constructor
    public Student(){
        System.out.println("I am in default constructor ");

    }
    public Student(int a){
        System.out.println(" I am in parameterised constructor");
    }

    // going to made some method overloading function
    public void func1(double a){
        System.out.println("I am in double parameter functons"+"value in this "+a);
    }
    public void func1(String s){
        System.out.println("Hello everyone "+s);
    }

}
public class LowerToHigher {
    public static void main(String[] args){
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the value :(in int) ");
        int a=sc.nextInt();
        Student s1=new Student();
        s1.func1(a);        // we are giving integer datatype it choses the double parameter's function 
    //    System.out.println()
       sc.close();
    }
    
}
