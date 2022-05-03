import java.util.Scanner;
public class NthPrimeNumber {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to print prime number upto nth");
        System.out.print("Enter the number upto which you want prime number:");
        try{
            int a=sc.nextInt();
            try{
            if(a<0){
                throw new Exception();
            }
            else if(a==0 || a==1){
                System.out.println("No prime numbers are upto this input");
            }
            else if(a==2){
                System.out.println("Only 2 is the prime numbers upto this input");
                
            }
            else{
                for(int i=2;i<=a;i++){
                    int p=0;
                    for(int j=2;j<i;j++){
                        if(i%j!=0){
                          continue;
                        }
                        p=1;
                        break;
                    }
                    if(p!=1){
                        System.out.print(i+" ");
                    }
                }
            }
        }
        catch(Exception e){
            System.out.println("Negative input is invalid!");
        }
        }
        catch(Exception e){
            System.out.println("Input is invalid!");
        }
        finally{
            sc.close();
        }

   }
    
}
