import java.util.Scanner;
public class Diamond {
    public static void main(String[] args){
        Scanner sc=new Scanner (System.in);
        System.out.println("Diamond Formation");
        System.out.print("Enter the no of rows: (in odd)");
        try{
            int a=sc.nextInt();
            try{
            if(a%2==0){
                throw new Exception ();
            }
            else{
                int p=1,q=a-1;
                for(int i=1;i<=a;i++){
                    for(int j=1;j<=q;j++){
                        System.out.print(" ");
                    }
                    q--;
                    for(int k=1;k<=p;k++){
                        System.out.print("*");
                    }
                    p+=2;
                    System.out.print("\n");
                }
                int p1=1,q1=p-4;
                
                for(int l=1;l<a;l++){
                    for(int j1=1;j1<=p1;j1++){
                        System.out.print(" ");
                    }
                    p1++;
                    for(int h1=1;h1<=q1;h1++){
                        System.out.print("*");
                    }
                    q1-=2;
                    System.out.print("\n");

                }

            }
        }
        catch(Exception e){
            System.out.println("The input value is not odd!");
        }
        }
        catch(Exception e){
            System.out.print(e);
        }
        finally{
            sc.close();
        }

    }

    
}
