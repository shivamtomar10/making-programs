import java.util.Scanner;
class Distance {
    int d;

    public Distance() { // default constructor
        d = 0;
    }

    public Distance(int d) { // parameterised constructor
        this.d = d; // using of this pointer
    }

    // 1m = 3.28084 ft
    // 1 m =39.370078740157 in
    // as we are providing distance in meter or kilometer
    public void calInFeetaInc() {
        double feet1 = this.d * 3.28084;
        double inches1 = this.d * 39.370078740157;
        System.out.println("The value after converting into feet is:" + feet1);
        System.out.println("The value after converting into inches is:" + inches1);
    }
    public void calInFeetaInc(int h) {  // method overloading
        double feet1 = h * 3.28084;
        double inches1 = h * 39.370078740157;
        System.out.println("The value after converting into feet is:" + feet1);
        System.out.println("The value after converting into inches is:" + inches1);
    }
}

public class DistanceClass {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the value of distance in meter");
        int a=0;
        try{
            a=sc.nextInt();
        }
        catch(NumberFormatException e)
        {
            System.out.println(e);
        }
        finally{
            sc.close();
        }
        Distance d1=new Distance();
        Distance d2=new Distance(a);
        d1.calInFeetaInc(a);
        System.out.println("values of second object");
        d2.calInFeetaInc();
    }

}
