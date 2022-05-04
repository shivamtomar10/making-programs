import java.util.Scanner;
import java.util.Arrays;
public class LargestSmallestArray {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to find largest and smallest in an array");
        System.out.println("Enter the size and also its elements");
        try{
            System.out.print("Enter the size of an array:");
            int a=sc.nextInt();
            int [] arr =new int [a];
            for(int i=0;i<arr.length;i++){
                System.out.print("Enter the value at index arr["+i+"]:");
                int u=sc.nextInt();
                arr[i]=u;
            }
            Arrays.sort(arr);
            System.out.println("The smallest value in the array is:"+arr[0]);
            System.out.println("The largest value in the array is:"+arr[arr.length-1]);
        }
        catch(Exception e){
            System.out.println("Your input is invalid!");
        }
        finally{
            sc.close();
        }
    }
    
}
