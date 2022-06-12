
//TWENTIETH PROGRAM OF JAVA PRACTICAL



import java.util.Scanner;
class ExceptionExtends extends Exception{
    public ExceptionExtends(String h){
        System.out.println(h);
    }
    public ExceptionExtends(){
         System.out.println("ExceptionExtends.lang.exception:"+this);
    }
}
public class ExceptionClass {
    public static void main(String[] args){
        
        Scanner sc=new Scanner(System.in);
        try{
            System.out.print("Enter the id :");
            int a=sc.nextInt();
            if(a==0){
                throw new ExceptionExtends("Error as default values cannot be used!");
            }
            else if(a<0){
                throw new ExceptionExtends("Error as id cannot be negative!");
            }
            else if(a==8){
                throw new ExceptionExtends();
            }

            System.out.println("Thanks for entering your information,have a nice day");
        }
        catch(ExceptionExtends e){
            System.out.println("Try Again!");
        }
        finally{
            sc.close();
        }
    }
    
}
