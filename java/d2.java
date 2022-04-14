import java.util.Scanner;
public class d2 {
    public static void main(String[] args){
        System.out.print("Enter your age");
        Scanner sc =new Scanner(System.in);
        int a=sc.nextInt();
        sc.close();
        // boolean df=(a==18);
        // if(a>=18 && a<=19)
        // {
        //     System.out.print("Your child is eligible");
        // }
        // else{
        //     System.out.print("Your child is not eligible ");
        // }

        switch(a)
        {
            default->{
                System.out.println("shivam");
            }
            case 12->     //->for not running other cases//: for running other case if there is no break
            {
                System.out.println("you are handsome");
                System.out.println("father are good");
            }
            case 18->{
                System.out.println("koghtfy");
                System.out.println("mom is best");
            }
        }
    }

    // if(a==18)
    // {
    //     System.out.println("\"you are my father\"");
    // }
    // else if(a<12)
    // {
    //     System.out.println("\"you are my son\"");
    // }
    // else
    // {
    //     System.out.println("\"you are my mom\"");
    // }

}
