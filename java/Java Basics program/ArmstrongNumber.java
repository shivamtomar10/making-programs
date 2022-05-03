import java.util.Scanner;
public class ArmstrongNumber {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is to find Armstrong number ");
        System.out.print("Enter yor number for Armstrong checking:");
        try{
            int a=sc.nextInt();
            int p=a;
            String d=Integer.toString(a);
            int l=d.length();
            int [] arr=new int[l];
            int i=0;
            while(a>0){
                int h=a%10;
                arr[i++]=h;
                a=a/10;
            }
            long sum=0;
            for(int i1=0;i1<arr.length;i1++){
              int y=arr[i1];
            //   System.out.println("y="+y);
              long sum1=1;
              for(int j=1;j<=l;j++){
                  sum1*=y;;
              }
              sum+=sum1;
            //   System.out.println("sum1="+sum1);

            //   System.out.println("sum="+sum);
            }

            if(sum==p){
                System.out.println("The input number is Armstrong number");
            }
            else{
                System.out.println("The input number is not Armstrong number");
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
