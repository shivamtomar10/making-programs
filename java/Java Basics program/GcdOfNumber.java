import java.util.Scanner;
public class GcdOfNumber{
    public static int gcdOfNumbers(int a,int b){
        if(b==0){
            return a;
        }
        return gcdOfNumbers(b,a%b);
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This Program is used to find GCD of two numbers");
        System.out.println("Enter the two numbers to find their GCD:");
        try{
            System.out.print("Enter the first number:");
            int a=sc.nextInt();
            // System.out.print("\n");
            System.out.print("Enter the second number:");
            int b=sc.nextInt();
           int gcd=gcdOfNumbers(a, b);
           System.out.println("The gcd of the input number is:"+gcd);
            
        }
        catch(Exception e){
            System.out.println("Your input is invalid");
        }
        finally{
            sc.close();
        }
    }
}