import java.util.Scanner;
public class trycatch {
    public static int greet(){
        try{
            Scanner d=new Scanner(System.in);
            int a=d.nextInt();
            int h=9/a;
            d.close();
            System.out.println(h);
            return h;
        }
        catch(Exception e){
            System.out.println(e);
        }
        finally{
            System.out.println("CLeaning ... Cleans all the running");
        }
        return -1;
    }
    public static void main(String[] args ){
       Scanner sc=new Scanner(System.in);
       int h=greet();
       System.out.println(h);
       int a=sc.nextInt();
       int b=sc.nextInt();
       try{
           int c=a/b;
           System.out.println("The answer after division is:"+c);

       }
       catch(Exception e ){
           System.out.println("Answer cannot be calculated");
       }
       finally{
           System.out.println("Cleaning Happens.. CLose all tabs:");
           sc.close();
       }



    }
    
}
