import java.util.Scanner;
public class HalfDiamond {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Half Diamond Formation");
        System.out.print("Enter the no of rows:(in odd) ");
        try{
            int a=sc.nextInt();
            try{
                if(a%2==0){
                    throw new Exception();
                }
                else{
                    for(int i=1;i<=a;i++){
                        for(int j=1;j<=i;j++){
                            System.out.print("*");
                        }
                        System.out.print("\n");
                    }
                    int p1=a-1;
                    int q1=p1;
                    for(int i2=1;i2<=p1;i2++){
                        for(int j2=1;j2<=q1;j2++){
                            System.out.print("*");
                        }
                        q1--;
                        System.out.print("\n");
                    }
                }
            }
            catch(Exception e){
                System.out.println("The input value is not odd!");
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
