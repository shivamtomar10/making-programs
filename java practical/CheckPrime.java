import java.util.Scanner;
public class CheckPrime {
    public static int isPrime(int a){
        if(a<0 ||a==0)
        {
            if(a!=0 && a<0)
            System.out.println("negative values as input is not possible");
            return 0;
        }
        else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                return 0;
            }
        }
        return 1;
    }
    }
    public static void main(String[] args ){
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter your number for testing prime number");
        try{
            int y=sc.nextInt();
            
           int h= isPrime(y);
           if(h==0){
               System.out.println("The input number is not prime number");
            }
            else{
                System.out.println("The input number is prime number");
            }
        }
        catch(Exception e){
            System.out.println("Invalid Input!");
        }
        finally{
            sc.close();
        }
    }
    
}
