
//TENTH PROGRAM OF JAVA PRACTICAL


import java.util.Scanner;
class Distance{
    double feet , inches;

    // methods of class 


    public Distance(){
        this.feet=0;
        this.inches=0;
    }
    public Distance(double a,double b){
        this.feet=a;
        this.inches=b;
    }
    public Distance(Distance obj){
        this.feet=obj.feet;
        this.inches=obj.inches;
    }
    public void calculateInFeetAndInches(long dist){
        this.feet=3280.84*dist;         // use of this pointer
        this.inches=39370.1*dist;
    }
    public void print(){
        System.out.println("The distance(Km) in feet is :"+this.feet);
        System.out.println("The distance(Km) in inches is:"+this.inches);
    }
}


public class ModifyDistance {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the distance in Kilometre for its calculation in feet and inches:");
        try{
            long a=sc.nextInt();
            if(a<0){
                throw new Exception("Distance should be positive");
            }
            Distance obj1=new Distance();
            obj1.calculateInFeetAndInches(a);

            Distance obj2=new Distance(2.4,3.5);
            Distance obj3=new Distance(obj2);
            Distance obj4=new Distance(obj3);


            Distance objclone=new Distance(obj2);

            // printing of values of obj2
            System.out.println("The value of first object as values passed through constructor");
            obj2.print();

            // printing of values of obj4
            System.out.println("The value of object which passed a refrence object which is also a refrence to another object");
            obj4.print();

            // printing of values of objclone 
            System.out.println("The value of a object which is clone to first object");
            objclone.print();



        }
        catch(Exception e){
            System.out.println(e);
        }
        finally{
            sc.close();
        }

    }
    
}
