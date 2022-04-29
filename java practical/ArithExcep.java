import java.util.Scanner;
public class ArithExcep{
    public static void main(String[] args){
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the two number for division");
        int a=sc.nextInt();
        int b=sc.nextInt();
        try{
            int c=a/b;
            System.out.println("The division of two number is:"+c);
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
        finally{
            sc.close();
        }
    }
    
}
