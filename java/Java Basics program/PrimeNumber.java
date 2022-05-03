import java.util.Scanner;
public class PrimeNumber{
    public static int  func1(int h){
        if(h==1){
            return 0;
        }
        else if(h==2){
            return 1;
        }
        for(int i=2;i<h;i++){
            if(h%i==0){
                return 0;
            }
        }
        return 1;
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is of prime number check");
        System.out.print("Enter the number for prime number check:");
        try{
            int a=sc.nextInt();
            try{
                if(a<0){
                    throw new Exception();
                }
                else if(a==0){
                    System.out.println("Zero is excluded from prime number checking" +"\n"+"But for the sake it is not prime number");
                }
                else{
                    int u=func1(a);
                    if(u==0){
                        System.out.println("Input number is not prime number");
                    }
                    else{
                        System.out.println("Input number is prime number");
                    }
                }

            }
            catch(Exception e){
                System.out.println("The checking of negative number as prime is not possible!");
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