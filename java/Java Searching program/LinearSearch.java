import java.util.Scanner;
public class LinearSearch{
    public static void searchingElement(int arr[],int a){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==a){
                System.out.println("The value find at arr["+i+"]");
                break;
            }
        }
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to find an element in an array through Linear Search");
        System.out.print("Enter the size of th array:");
        try{
            int size=sc.nextInt();
            int [] arr=new int [size];
            for(int i=0;i<arr.length;i++){
                System.out.print("Enter the value(only integer type) at arr["+i+"]:");
                int h=sc.nextInt();
                arr[i]=h;
            }
            // for searching particular element 
            System.out.println("Enter the element for search in the array");
            try{
            int y=sc.nextInt();
            searchingElement(arr, y);
            }
            catch(Exception e){
                System.out.println("Your searching input is invalid!");
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