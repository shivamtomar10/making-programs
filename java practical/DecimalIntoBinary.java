
// FIFTH PROGRAM OF JAVA PRATICAL

import java.util.Scanner;
public class DecimalIntoBinary {
    public static void main(String [] args){
        Scanner sc=new Scanner (System.in);
        System.out.print("Enter the number for its Binary Conversion:");
        try{
            int a=sc.nextInt();
            System.out.println("The Binary Conversion of your input number "+a+" is:"+Integer.toBinaryString(a));
        }
        catch(Exception e){
            System.out.println("Your input is wrong or not valid!");
        }
        finally{
            sc.close();
        }
    }
    
}
