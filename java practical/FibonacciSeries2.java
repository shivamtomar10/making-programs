
// SIXTEENTH PROGRAM PART 2 OF JAVA PRACTICAL

import ForMultiFileProgramfolder.MultiLevelPackage.FibonacciSeries;
import java.util.Scanner;
public class FibonacciSeries2{
    public static void main(String [] args){
        FibonacciSeries obj1=new FibonacciSeries();
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of terms you want:");
        try{
            int n=sc.nextInt();
            if(n<=0){
                throw new Exception();
            }
            obj1.generatingFibonacciSeries(n);

        }
        catch(Exception e){
            System.out.println("The number of terms must be greater than zero!");
        }
        finally{
            sc.close();
        }

    }
}