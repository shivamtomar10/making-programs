import java.util.Scanner;
public class BubbleSort {
    public static void func1(int arr[]){
        for(int i=0;i<arr.length-1;i++){
            for(int j=0;j<arr.length-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int y=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=y;
                }
            }
        }
    }
    public static void printArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println("The value of arr["+i+"] is:"+arr[i]);
        }
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is to sort the array through Bubble sort");
        System.out.print("Enter the size of the one dimension array:");
        try{
        int size=sc.nextInt();
        System.out.println("Now you have to fill the data into your array");
        int [] arr=new int [size];
        for(int i=0;i<arr.length;i++){
            System.out.print("Enter the value(only integer type) at arr["+i+"] :");
            int h=sc.nextInt();
            arr[i]=h;
         
        }
        func1(arr);
        sc.close();
        System.out.println("Array after Bubble sort");
        printArray(arr);
    }
    catch(Exception e){
        System.out.println("Your input is invalid!");
    }
}
}
