import java.util.Scanner;
public class SquareRootNumber {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to find Square root of the input number");
        System.out.print("Enter the number for its square root");
        try{
            int a=sc.nextInt();
            try{
                if(a<0){
                    throw new Exception();

                }
                else if(a==0){
                    System.out.println("The square root of "+a + " is:0");
                }
                else if(a==1){
                    System.out.println("The Square root of "+a + " is :1");
                }
                else {
                    int p=0;
                    for(int i=2;i<a;i++){
                        if(i*i==a){
                            System.out.println("The Square root of "+a+"is:"+i);
                            p=1;
                            break;
                        }
                    }
                    if(p!=1){
                        System.out.println("The Square root of "+a+" not possible");

                    }
                }
            }
            catch(Exception e){
                System.out.println("Negative numbers are not possible as input");
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
