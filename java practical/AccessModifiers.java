

//TWELVETH PROGRAM OF JAVA PRACTICAL

class Show{
    public int x;
    private int y;
    final int h=2;
    int a1,b1;
    public void valuespassed(int a,int b){
        a=23;b=54;
        x=a;y=b;

    }
    public void objectpassed(Show obj){
        obj.a1++;
        obj.b1++;
    }
}
public class AccessModifiers{
    public static void main(String[] args){



        int a=2,b=3;
        Show obj1=new Show();
        System.out.println("The value of a is:"+a+"\n"+"The value of b is:"+b);
        obj1.valuespassed(a, b);
        System.out.println("After passing value in function:");
        System.out.println("The value of a is:"+a+"\n"+"The value of b is:"+b);
        
        
        Show obj2=new Show();
        obj2.a1=3;
        obj2.b1=4;
        
        obj2.objectpassed(obj2);
        
        System.out.println("After passing value as object in function:");
        System.out.println("The value of a1 is:"+obj2.a1+"\n"+"The value of b1 is:"+obj2.b1);
        
        // System.out.println(obj1.y);      this will give an error as it is private within the class

        System.out.println("The value of h for obj1:"+obj1.h);
        System.out.println("The value of h for obj2:"+obj2.h);  // final make the value constant for all object 



    }
}