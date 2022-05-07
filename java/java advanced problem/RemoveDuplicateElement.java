import java.util.Scanner;
import java.util.Arrays;
public class RemoveDuplicateElement {
    public static void duplicatesElementsRemove(int arr[]){
        Arrays.sort(arr);
        int [] arr1=new int[arr.length];
        int j=0;
        for(int i=0;i<arr.length-1;i++){
            if(arr[i]!=arr[i+1]){
                arr1[j++]=arr[i];
            }
        }
        arr1[j++]=arr[arr.length-1];
        System.out.println("The array elements after removal of duplicates are as follows:");
        for(int j1=0;j1<j;j1++){
            System.out.print(arr1[j1]+" ");
        }
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to remove duplicates from the array");
        System.out.print("Enter the size of the array(of integer type):");
        int size=sc.nextInt();
        int [] arr=new int[size];
        for(int i=0;i<arr.length;i++){
            System.out.print("Enter the value at arr["+i+"]:");
            int h=sc.nextInt();
            arr[i]=h;
        }
        duplicatesElementsRemove(arr);



    }
    
}
