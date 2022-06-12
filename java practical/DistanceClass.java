

//NINTH PROGRAM OF JAVA PRACTICAL


import java.util.Scanner;
class Distance{
    double feet , inches;

    // methods of class 
    public void calculateInFeetAndInches(long dist){
        this.feet=3280.84*dist;         // use of this pointer
        this.inches=39370.1*dist;
    }
    public void print(){
        System.out.println("The distance(Km) in feet is :"+this.feet);
        System.out.println("The distance(Km) in inches is:"+this.inches);
    }
}


public class DistanceClass {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        Distance obj1=new Distance();
        System.out.print("Enter the distance in Kilometre for its calculation in feet and inches:");
        try{
            long a=sc.nextInt();
            if(a<0){
                throw new Exception("Distance should be positive");
            }
            obj1.calculateInFeetAndInches(a);
            obj1.print();
        }
        catch(Exception e){
            System.out.println(e);
        }
        finally{
            sc.close();
        }

    }
    
}
