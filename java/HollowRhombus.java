
import java.util.Scanner;public class HollowRhombus {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Hollow Rhombus");
        System.out.print("Enter no of rows:");
        try{
            int a=sc.nextInt();
            int p=a-1;
            for(int i=1;i<=a;i++){
                for(int h=1;h<=p;h++){
                    System.out.print(" ");
                }
                p--;
                if(i==1 || i==a){
                for(int k=1;k<=4;k++){
                    System.out.print("*");
                }
                System.out.print("\n");
            }
            
                else{
                    System.out.print("*"+" "+" "+"*");
                    System.out.print("\n");
                }

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
