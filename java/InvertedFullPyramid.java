import java.util.Scanner;
public class InvertedFullPyramid {
    public static void main(String[] args ){
        Scanner sc=new Scanner(System.in);
        System.out.println("Inverted Full Pyramid Formation");
        System.out.print("Enter the no of rows:");
        // * * * * * 
        //  * * * *
        //   * * *
        //    * *
        //     *
        try{
            int a=sc.nextInt();
            int z=1;
            for(int i=a;i>=1;i--){
                if(i!=a){
                for(int p=1;p<=z;p++){
                    System.out.print(" ");
                }
                z++;
                }
                for(int k=1;k<=i;k++){
                    System.out.print("* ");
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
