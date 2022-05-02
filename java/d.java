
import java.util.Scanner;
public class d{
     public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter your first number");
        int a=sc.nextInt();
        sc.close();

        System.out.print("Enter your second number");
        int b=sc.nextInt();
        sc.close();

        System.out.printf("The sum of two numbers is :%d",a+b);
    
    }
}