
import java.util.Scanner;
public class TimeClock {
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(System.in);
        System.out.println("Time Clock Formation");
        System.out.print("Enter the no of rows:(in odd)");
        try{
            int a=sc.nextInt();
            try{
                if(a%2==0){
                    throw new Exception ();
                }
                else{
                    int p1=1;
                    for(int i=a;i>=1;i--){
                        
                        for(int j=1;j<p1;j++){
                            System.out.print(" ");
                        }
                        p1++;
                        for(int k=1;k<=i;k++){
                            System.out.print("* ");
                        }
                        System.out.print("\n");
                    }
                    int p=a-1;
                    for(int i=1;i<=a;i++){
                        for(int j=1;j<=p;j++){
                            System.out.print(" ");
                        }
                        p--;
                        for(int k=1;k<=i;k++){
                            System.out.print("* ");
                        }
                        System.out.print("\n");
                    }
                }
            }
            catch(Exception e){
                System.out.println("Your input is not odd!");
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
