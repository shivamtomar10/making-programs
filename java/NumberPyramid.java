import java.util.Scanner;
public class NumberPyramid {
    

  public static void main(String [] args){
      Scanner sc=new Scanner(System.in);
      System.out.print("Number Column formation");
      System.out.print("Enter the no of rows:");
      try{
          int a=sc.nextInt();
          for(int i=a;i>=1;i--){
              for(int k=a;k>=i;k--){
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
    

