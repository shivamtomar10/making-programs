import java.util.Scanner;
public class SolidRhombus {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Solid Rhombus");
        System.out.print("Enter the no of rows:");
        try{
            int a=sc.nextInt();
            int p=a-1;
            for(int i=1;i<=a;i++){
                for(int k=1;k<=p;k++){
                    System.out.print(" ");
                }
                p--;
                for(int j=1;j<=4;j++){
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
