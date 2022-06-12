
// EIGTHTEEN PROGRAM OF JAVA PRACTICAL


import java.util.Scanner;;
public class DivideByZero {
    public static void main(String [] args) throws ArithmeticException{
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is to calculate the division of two numbers hence enter two values for its division ");

       try{
            System.out.print("Enter the first number:");
            int a=sc.nextInt();
            System.out.print("Enter the second number:");
            int b=sc.nextInt(); 
            if(b==0){
               throw new Exception("Divide by zero is not possible!");
            }
            System.out.println("The division of two number("+a+"/"+b+") is:"+(double)a/b);

       }
       catch(Exception e){
           System.out.println(e);
       }
       finally{
           sc.close();
       }

    }
    
}
