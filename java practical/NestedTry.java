import java.util.Scanner;
public class NestedTry {
    public static void main(String [] args){
        Scanner sc=new Scanner (System.in);
        // As we want user to enter only positive values for division greater than 0
        try{
            System.out.println("Enter the First value : ");
            int a=sc.nextInt();
            System.out.println("Enter the second value:");
            int b=sc.nextInt();
            if(a<0 || b<0){
                throw new Exception();
            }
            try{
                if(a==0 ||b==0){
                    throw new Exception ();
                }
                System.out.println("The division of two number is:"+a/b);
            }


            catch(Exception e){
                System.out.println(e);
                System.out.println("Either of first or second is zero");
            }
        }
        catch(Exception e){
            System.out.println(e);
            System.out.println("Either of first or second is negative");

        }
        finally{
            sc.close();
        }
    }
    
}
