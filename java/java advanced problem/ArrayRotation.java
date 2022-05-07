import java.util.Scanner;
public class ArrayRotation{
    public static int rotateElementOfArray(int arr[], int r){
        if(arr.length<=1){
            return 1;
        }
        while(r>0){
            int y=arr[arr.length-1];
            for(int i=arr.length-2;i>=0;i--){
                int h=arr[i];
                arr[i+1]=h;
            }
            arr[0]=y;
            r--;
           
        }
        return 1;
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is to rotate the elements of the array in clockwise direction ");
        System.out.print("Enter the size of the Array(of integer type):");
        int size =sc.nextInt();
        int [] arr=new int [size];
        for(int i=0;i<arr.length;i++){
            System.out.print("Enter the value at arr["+i+"]:");
            int h=sc.nextInt();
            arr[i]=h;
        }
        System.out.print("Enter the no of times you want to rotate the element of the array:");
        int rotate=sc.nextInt();
        rotateElementOfArray(arr, rotate);
        for(int i1=0;i1<arr.length;i1++){
            System.out.println("The value at arr["+i1+"]:"+arr[i1]);
        }

        sc.close();
    }
}