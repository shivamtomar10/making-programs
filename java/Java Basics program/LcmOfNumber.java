import java.util.Scanner;
public class LcmOfNumber {
    public static void main(String [] args){
        Scanner sc=new Scanner (System.in);
        System.out.println("This program is used to find out LCM of two number");
        System.out.print("Enter the first numbers:");
        int a=sc.nextInt();
        System.out.print("Enter the second number:");
        int b=sc.nextInt();
        int lcm=1;
        if(a>=b){
            if(a%b==0){
                lcm=a;
            }
            else{
                
                lcm=a*b;
            }
       
    }
    else{
        if(b%a==0){
            lcm=b;
        }
        else{
            lcm=b*a;
        }
    }
    System.out.println("The lcm of the two number as input is:"+lcm);


    }
    
}
