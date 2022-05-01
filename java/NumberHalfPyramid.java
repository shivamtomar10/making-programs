import java.util.Scanner;
public class NumberHalfPyramid {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Number Half Pyramid Formation");
        System.out.print("Enter no of rows:");
        try{
            int a=sc.nextInt();
            for(int i=1;i<=a;i++){
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
