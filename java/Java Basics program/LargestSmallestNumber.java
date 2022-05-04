import java.util.Scanner;
public class LargestSmallestNumber {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to find largest and smallest of three numbers");
        System.out.println("Enter the three numbers for largest and smallest:");
        try{
            System.out.print("Enter the first number:");
            int a=sc.nextInt();
            System.out.print("Enter the second number:");
            int b=sc.nextInt();
            System.out.print("Enter the third number:");
            int c=sc.nextInt();
            // for largest

            int y=a>=b?a:b;
            int h=y>=c?y:c;

            System.out.println("The largest of three input numbers is:"+h);

            // for smallest

            int y1=a<=b?a:b;
            int h1=y1<=c?y1:c;
            System.out.println("The smallest of three numbers is:"+ h1);

        }
        catch(Exception e){
            System.out.println("Your input is invalid!");
        }
        finally{
            sc.close();
        }
    }
    
}
