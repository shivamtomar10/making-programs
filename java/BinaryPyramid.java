import java.util.Scanner;
public class BinaryPyramid {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Binary Half Pyramid Formation");
        System.out.print("Enter the no of rows:");
        try{
            int a=sc.nextInt();
            for(int i=1;i<=a;i++){
                int p=1;
                for(int j=1;j<=i;j++){
                    System.out.print(p%2);
                    p++;
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
