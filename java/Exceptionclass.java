// import java.util.Scanner;
class MyException extends Exception{
    public String toString(){
        return ("I am coming in toString function");   
    }
    public String getMeassage(){
        return("I am coming in getMessag function");
    }
    // public void peekStacktrace(){
    //     System.out.println("I am in peek Stacktrace");
    // }
 
} 

public class Exceptionclass {
    public static void greet1() throws ArithmeticException{
        int a=0;
        try{
            int c=9/a;
            System.out.println(c);
        }
        catch(Exception e){
            System.out.println("Cannot answered");
        }
    }
    public static void main(String[] args){
    //    Scanner sc=new Scanner(System.in);
    //    int a=sc.nextInt();
    //    if(a<100)
    //    {
    //        try{
    //        throw new MyException();
    //            }
    //    
    //    catch(Exception e){
    //        System.out.println(e.toString());
    //        System.out.println(e);
    //        System.out.println(e.getMessage());
    //    }
    // }
    greet1();
       
    }
    
}
