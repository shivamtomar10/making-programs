

class SumOfNumber{
    public static void main(String [] args){
        int sum=0,num=0;
        // loop for calculating sum as input in any number from cmd prompt
       for(int i=0;i<args.length;i++){
        try{                                 // Checking for an error in args 
            num=Integer.parseInt(args[i]);     // using of wrapper class 
        }
        catch(NumberFormatException e){
            System.out.println(e);
        }
        sum+=num;       // adding number 
    }
        System.out.println("The sum of integers entered from command line is:"+sum);
    }
}