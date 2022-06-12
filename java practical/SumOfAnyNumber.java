
/* FIRST PROGRAM OF JAVA PRACTICAL */

public class SumOfAnyNumber {
    public static void main(String [] args){

        int sum=0;
        for(int i=0;i<args.length;i++){
            sum+=Integer.parseInt(args[i]); // using wrapper classes
        }
        System.out.println("The sum of input numbers from command line argument is :"+sum);
    }
}
