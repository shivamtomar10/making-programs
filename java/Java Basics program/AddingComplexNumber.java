import java.util.Scanner;
public class AddingComplexNumber {
    public static int addingComplexNumber(int a,int b){
        return a+b;
    }
    
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to add two complex number");
        System.out.println("Enter the two number as of format x+iy where x and y are real numbers but here you can give only integer and 'i' is complex");
        System.out.println("Enter the real part of first complex number");
        int a=sc.nextInt();
        System.out.println("Enter the imaginary part of first complex number");
        int b=sc.nextInt();
        System.out.println("Enter the real part of second complex number");
        int c=sc.nextInt();
        System.out.println("Enter the imaginary part of second complex number");
        int d=sc.nextInt();

       int y= addingComplexNumber(a, c);
       int x=addingComplexNumber(b, d);

       System.out.println("The complex number after adding is:"+y+"+i"+x);

        sc.close();

    }
    

}
