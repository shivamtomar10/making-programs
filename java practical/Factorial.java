import java.util.Scanner;
public class Factorial {
    // function for the factorial
    public static void factor1(int a){
        int p=1;
        for(int i=a;i!=0;i--){
            p*=i;
        }
        System.out.println("The factorial of the number "+a+" is:"+p);
    }
    public static void main(String [] args){
        Scanner sc= new Scanner(System.in); // creating refrence of Scanner Class
        System.out.println("Enter your number for factorial ");
        try{
        int a =sc.nextInt();    // taking input and check for error in input 
        factor1(a);
        }
        catch(Exception e){
            System.out.println("Your Input is invalid!"); // catch if error comes
        }
        finally{
            sc.close();  // closing Scanner refrence in finally block
        }
    }
    
}
