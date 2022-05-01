import java.util.Scanner;
public class InvertedNumberHlfPyra {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Inverted Number Half Pyramid Foramtion");
        System.out.print("Enter the no of rows:");
        try{
            int a=sc.nextInt();
            for(int i=a;i>=1;i--){
                for(int k=1;k<=i;k++){
                    System.out.print(k+" ");

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
