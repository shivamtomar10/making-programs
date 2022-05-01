

import java.util.Scanner;

public class HalfPyramid {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        // *
        // * *
        // * * *
        // * * * * 
        // * * * * * 
        System.out.println("Half pyramid formation program");
        System.out.print("Enter the no of rows:");
        try{
        int a=sc.nextInt();
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.print("\n");
        }
    }
    catch(Exception e){
        System.out.println(e);
    }
    finally{
        sc.close();
    }
    }
    
}
