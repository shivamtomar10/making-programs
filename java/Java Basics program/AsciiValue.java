import java.util.Scanner;
public class AsciiValue {
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is to print ASCII value of input");
        System.out.print("Enter the Character for its ascii value:");
        try{
            String s1=sc.next();
            int l1=s1.length();
            
            for(int i=0;i<l1;i++){
                char h=s1.charAt(i);
                System.out.println("The ascii value of "+h+"is:"+(int)h);
            }

        }
        catch(Exception e){
            System.out.println("your input is invalid!");
        }
        finally{
            sc.close();
        }
    }
    
}
