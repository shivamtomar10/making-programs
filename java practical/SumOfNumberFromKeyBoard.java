
//SEVENTH JAVA PROGRAM OF PRACTICAL

import java.util.Scanner;
public class SumOfNumberFromKeyBoard {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        try{

            int sum=0;
            System.out.println("Enter the numbers as you give total number of integers you add as command line argument");
            for(int i=0;i<Integer.parseInt(args[0]);i++){
                int a=sc.nextInt();
                sum+=a;
            }
            System.out.println("The sum of all the input  numbers is:"+sum);
        }
        catch(Exception e){
            System.out.println("Your input is invalid or wrong!");
        }
        finally{
            sc.close();
        }
    }
}
