import java.util.Scanner;
// import java.util.*;
public class DecimalToBina {
    public static void main(String [] args){
        System.out.println("Enter the Number which you want to convert into Binary ");
        Scanner sc=new Scanner(System.in);
        try{
            int a=sc.nextInt();
            System.out.println("The Binary Conversion Of given Number is:"+Integer.toBinaryString(a));

        }
        catch(Exception e){
            System.out.println("The Inputis invalid!");
        }
        finally{
            sc.close();
        }
    }
    
}
