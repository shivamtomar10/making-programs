
import java.util.Scanner;
public class InvertedHalfPyramid {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Inverted Half Pyramid formation ");
        System.out.print("Enter the no of rows:");
        // * * * * * 
        // * * * * 
        // * * * 
        // * * 
        // * 

        try{
            int a=sc.nextInt();
            for(int i=a;i>=1;i--){
                for(int j=i;j>=1;j--){
                    System.out.print("*");

                }
                System.out.print("\n");
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
