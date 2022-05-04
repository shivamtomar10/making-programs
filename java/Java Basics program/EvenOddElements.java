import java.util.Scanner;
public class EvenOddElements {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to print the elements at even and odd positions ");
        System.out.println("Enter the size of the array and alos its elements ");
        try{
            int size=sc.nextInt();
            int [] arr=new int [size];
            for(int i=0;i<arr.length;i++){
                System.out.println("Enter the value at index arr["+i+"]:");
                int h=sc.nextInt();
                arr[i]=h;
            }
            System.out.println("The Even  positions elements are as:");

            for(int i=0;i<arr.length;i++){
                if(i%2==0){
                    System.out.println("The value at index arr["+i+"]:"+arr[i]);
                }
            }
            System.out.println("The Odd positions elements are as:");
            for(int i=0;i<arr.length;i++){
                if(i%2!=0){
                    System.out.println("The value at index arr["+i+"]:"+arr[i]);
                }
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
