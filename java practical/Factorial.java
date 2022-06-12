
// SECOND PROGRAM OF JAVA PRACTICAL

import java.util.Scanner;
public class Factorial {
    public static int factorialOfNumber(int n){
        if(n==1 || n==0){
            return 1;
        }
        return n*factorialOfNumber(n-1);        // through recursion we find factorial of a number
    }
    public static void main(String [] args) throws Exception{
        Scanner sc=new Scanner (System.in);
        System.out.print("Enter the number for its factorial:");
        try{
            int a=sc.nextInt();
            if(a<0){
                throw new Exception("Your input must be zero or positive Integers!");
            }
            else{
                int h=factorialOfNumber(a);
                System.out.println("The factorial of the input number '"+a+"' is:"+h);
            }
        }
        catch(Exception e){
            System.out.println(e);
        }
        finally{
            sc.close();
        }
    }
    
}
