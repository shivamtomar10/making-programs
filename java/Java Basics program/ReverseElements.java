import java.util.Scanner;
public class ReverseElements {
    public static void main(String [] args){
        Scanner sc=new Scanner (System.in);
        System.out.println("This program is to print the elements of an array in reverse order ");
        System.out.println("Enter the size of an array and also its elements");
        try{
            System.out.print("Enter the size of an array:");

            int size=sc.nextInt();
            int [] arr=new int [size];
            for(int i=0;i<arr.length;i++){
                System.out.println("Enter the lements at index arr["+i+"]:");
                int h=sc.nextInt();
                arr[i]=h;
            }
            for(int i=arr.length-1;i>=0;i--){
                System.out.println("The value at index arr["+i+"]:"+arr[i]);
            }

        }
        catch(Exception e){
            System.out.println("Your input is invalid!");
        }
        finally{
            sc.close();
        }
    }
    
}
