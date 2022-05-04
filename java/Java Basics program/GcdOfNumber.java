import java.util.Scanner;
public class GcdOfNumber{
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
            if(a>=b){
                int p=1;
            
            for(int j=2;j<=b;j++){
                if(a%j==0 && b%j==0){
                        p*=j;
                    }
                }
           
            System.out.println("The GCD of the input numbers is:"+p);
        }
        else{
            int p1=1;
           
            for(int j=1;j<=a;j++){
                if(a%j==0 && b%j==0){
                        p1*=j;
                    }
                }
           
            System.out.println("The GCD of the input numbers is:"+p1);

        }
            
        }
        catch(Exception e){
            System.out.println("Your input is invalid");
        }
        finally{
            sc.close();
        }
    }
}