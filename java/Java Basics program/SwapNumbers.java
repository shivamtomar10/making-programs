import java.util.Scanner;
public class SwapNumbers {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to swap the numbers ");
        System.out.println("Enter the numbers");
        System.out.print("Enter the first number:");
        int a=sc.nextInt();
        System.out.print("Enter the second number:");
        int b=sc.nextInt();

        //swap the numbers 
        int h=a;
        a=b;
        b=h;
        System.out.println("The value of first number after swap is:"+a);
        System.out.print("The value of second number after swap is:"+b);

    }
    
}
