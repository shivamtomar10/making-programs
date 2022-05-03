import java.util.Scanner;
public class ReverseNumber{
public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("This program is to reverse the number");
    System.out.print("Enter the number for reverse:");
    try{
        int a=sc.nextInt();
        String h=Integer.toString(a);
        int l=h.length();
        int [] arr =new int [l];
        int i=0;
        while(a>0){
            int u=a%10;
            arr[i++]=u;
            a=a/10;
        }
        System.out.println("The reverse of the input number is:");
        for(int i1=0;i1<arr.length;i1++){
            System.out.print(arr[i1]);
        }
    }
    catch(Exception e){
        System.out.print("Your input is invalid!");

    }
    finally{
        sc.close();
    }
} 
    
}
