import java.util.Scanner;


public class CheckLeapYear {
    public static void main(String [] args){
        Scanner sc=new Scanner (System.in);
        System.out.println("This program is used to check a particular year leap year");
        System.out.print("Enter the year for check:");
        try{
        int a=sc.nextInt();
       
            String h=Integer.toString(a);
            int l=h.length();
            try{
                if(l!=4){
                    throw new Exception ();
                }
                if(a%4==0){
                    if(a%10==0){
                        if(a%400==0){
                            System.out.println("The input year is a Leap Year");
                        }
                        else{
                            System.out.println("The input year is not a Leap Year");
        
                        }
                    }
                    else{
                        System.out.println("The input year is not a Leap Year");
        
                    }
                }
                else{
                    System.out.println("The input year is not a Leap Year");
        
                }
            }
            catch(Exception e){
                System.out.println("The input of year is incompatible length");
            }
        }
        catch(Exception e){
            System.out.println("Your input is invalid!");
        }
    }
}


