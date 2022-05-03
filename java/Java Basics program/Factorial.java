import java.util.Scanner;
public class Fcatorial {
    public static long func1(int h){
        long p=1;
        for(int i=1;i<=h;i++){
            p*=i;
        }
        return p;
    }
    public static void main(String [] args){
        Scanner sc=new Scanner (System.in);
        System.out.println("This program is to find factorial of given number");
        System.out.print("Enter the number for its Factorial:");
        try{
            int a=sc.nextInt();
            try{
                if(a<0){
                    throw new Exception ();
                }
                else if(a==0 || a==1){
                    System.out.println("The Factorial of input number is:1");
                }
                else{
                    long y=func1(a);
                    System.out.println("The factorial of input number is:"+y);
                }
            }
            catch(Exception e){
                System.out.println("The factorial of negative number is not possible");
            }
        }
        catch(Exception e){
            System.out.println("Your input is invalid!");
        }
        finally{
            sc.close();
        }
    }
    
}
