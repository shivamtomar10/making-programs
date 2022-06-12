

//SIXTH JAVA PROGRAM OF JAVA PRACTICAL

import java.util.Scanner;
public class PrimeNumber {
    public static int primeNumberCheck(int n){
        if(n<0){
            return -1;
        }
        else if (n==0 || n==1){
            return 1;
        }
        else{
            int p=0;
            
            for(int i=2;i<n;i++){
                if(n%i==0){
                    p=1;
                    break;
                }
            }
            if(p==0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number for its check as prime number or not:");
        try{
            int a=sc.nextInt();
            int h=primeNumberCheck(a);
            if(h==-1){
                System.out.println("The input number shouldnot be negative");
            }
            else if(h==0){
                System.out.println("The input number "+a+" is a prime number");
            }
            else if(h==1){
                System.out.println("The input number "+a+" is not a prime number");
            }
        }
        catch(Exception e){
            System.out.println("Your input is wrong or invalid!");
        }
        finally{
            sc.close();
        }

    }
}
