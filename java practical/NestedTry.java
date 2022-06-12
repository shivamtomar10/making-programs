
//NINETEEN PROGRAM OF JAVA PRACTICAL


import java.util.Scanner;
public class NestedTry {
    public static void main(String [] args){
        Scanner sc=new Scanner (System.in);
        try{
            System.out.print("Enter your id:");
            int a=sc.nextInt();

            System.out.print("Enter your name:");
            String s=sc.next();
            // System.out.println("s:"+s+" "+j);

            try{
                if(a==0){
                    throw new Exception("You cannot enter default values");
                }

                System.out.println("Your id:"+a+"\n"+"Your name:"+s);
                System.out.println("Thankyou for entering your information , have a nice day.");
            }
            catch(Exception e){
                System.out.println(e);
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
