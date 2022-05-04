import java.util.Scanner;
public class OneDimArr {
    public static void main(String [] args){
        Scanner sc =new Scanner (System.in);
        System.out.print("Enter the size of the array:");
        int size=sc.nextInt();
        int [] arr1=new int [size];   // declaring one dimension array dynamically
        //Taking input in array 
        System.out.println("Enter the value into the array of size '5' of integer type");
        for(int i=0;i<arr1.length;i++){
            int h=sc.nextInt();
            // System.out.print("s");
            arr1[i]=h;
        }
        sc.close();
        // following loop calculate the sum of the array
        int sum=0;
        for(int y=0;y<arr1.length;y++){
            sum+=arr1[y];
        }
        System.out.println("Sum is :"+sum);

    }
    
}

