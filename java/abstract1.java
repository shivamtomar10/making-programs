
abstract class base{
     protected  int x;
    base(){
        System.out.println("I am in base class parameterless constructor");
    }
    public void sets(int a){
        this.x=a;
    }
    abstract void greet(int a,int b);
}
class derived extends base{
   
    void greet(int a,int b){
        System.out.println("I am in derived class "+a+"Hello everyone"+b);
        x=90;
    }
}
public class abstract1 {
    public static void main(String[] args)
    {
        
    }
    
}
