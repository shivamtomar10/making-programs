import java.util.Scanner;
public class AlphabetPyramid {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Alphabet Half Pyramid formation");
        System.out.print("Enter the no of rows:");
        try{
            int a=sc.nextInt();
            for(int i=1;i<=a;i++){
                char ch='A';
                for(int j=1;j<=i;j++){
                    System.out.print(ch+++" ");
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
