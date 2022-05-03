
import java.util.Scanner;
public class PalindromeNumber {
    public static void main(String [] args) throws NumberFormatException{
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is of palindrome number check");
        System.out.print("Enter the number of palindrome check:");
        try{
                   
            int a=sc.nextInt();
            String s1=Integer.toString(a);
            int l=s1.length();
            int [] arr1=new int[l];
            int i=0;
            while(a>0){
                int h=a%10;
                arr1[i++]=h;
                a=a/10;
            }
            int [] arr2=new int[l];
            int j=l-1;
            for(int g=0;g<arr2.length;g++){
                arr2[g]=arr1[j--];
            }
            int p=0;
            for(int o=0;o<arr1.length;o++){
                if(arr1[o]==arr2[o]){
                    continue;

                }
                else{
                    p=1;
                    System.out.println("Input number is not palindrome");
                    break;
                }
            }
            if(p!=1){
                System.out.println("Input number is palindrome");
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
