import java.util.Scanner;
public class NumberIncreHalfPyramid {
    public static void main(String [] args){
        Scanner sc=new Scanner (System.in);
        System.out.println("Number Increasing Half Pyramid");
        System.out.print("Enter no of rows:");
        try{
            int a=sc.nextInt();
            int p=1;
            for(int i=1;i<=a;i++){
                for(int k=1;k<=i;k++){
                    System.out.print(p+++" ");
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
