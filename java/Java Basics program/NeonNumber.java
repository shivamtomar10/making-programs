import java.util.Scanner;
public class NeonNumber {
    public static int addingDigits(int h){
        String h1=Integer.toString(h);
        int u=h1.length();
        int [] arr=new int[u];
        int i=0,sum=0;
        while(h>0){
            int y=h%10;
            arr[i++]=y;
            h=h/10;
        }
        for(int i1=0;i1<arr.length;i1++){
            sum+=arr[i1];
        }
        return sum;
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to check for neon number");
        System.out.print("Enter the number for check:");
        int a=sc.nextInt();
       
        int result=a*a;
       int sum= addingDigits(result);
        if(sum==a){
            System.out.println("The input number is neon number");

        }
        else{
            System.out.println("The input number is not neon number");

        }
        
    }
    
}
