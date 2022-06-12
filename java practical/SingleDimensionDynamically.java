
//THIRD PROGRAM OF JAVA PRACTICAL

import java.util.Scanner;
class DynamicSingleDimensionArray{
    int size;
    int [] arr;
    Scanner sc=new Scanner(System.in);
    public DynamicSingleDimensionArray(int s){
        size=s;
    }
    public void valuesPassinginArray(){
        arr=new int[size];
        for(int i=0;i<arr.length;i++){
            System.out.print("Enter the value of array at position "+i+":");
            arr[i]=sc.nextInt();
        }
    }
    public void addingElement(){
        System.out.print("how much element you want to add:");
        int n=sc.nextInt();
        try{
            if(n<=0){
                throw new Exception("number of elements must be greater than zero!");
            }
            int h1=size;
            size+=n;
            int []arr1=new int[size];
            for(int i=0;i<arr.length;i++){
                arr1[i]=arr[i];
            }
            int p=1;
            for(int i1=h1;i1<size;i1++){
                System.out.print("Enter the"+p+" value:");
                arr1[i1]=sc.nextInt();
                p++;
            }

            arr=new int[size];
            for(int i=0;i<size;i++){
                arr[i]=arr1[i];
            }

        }
        catch(Exception e){
            System.out.println(e);
        }

    }
    public void print(){
        for(int i=0;i<size;i++){
            System.out.println("The value at position"+i+"is:"+arr[i]);
        }
    }
    


}

public class SingleDimensionDynamically{
    public static void main(String [] args){
      

        DynamicSingleDimensionArray obj1=new DynamicSingleDimensionArray(5);
        obj1.valuesPassinginArray();
        obj1.addingElement();
        obj1.print();


    }
}