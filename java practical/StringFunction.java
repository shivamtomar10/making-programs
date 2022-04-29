// setCharAt(, setLength(), append(), insert(), concat()and equals().
import java.util.Scanner;
// import java.util.*;
public class StringFunction {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string you want to perform different functions");
        StringBuffer s1=;
        System.out.println("Setting char at particular index");
        char ch=sc.next().charAt(0);
        int index=sc.nextInt();
        s1.setCharAt(index,ch);
    }
    
}
 