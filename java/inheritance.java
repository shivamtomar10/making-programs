class base{
    int h;
    base(){
        System.out.println("I am in base class");
    }
    base(int a)
    {
        System.out.println("I am in base class parameter constructor" +a);
    }
    public void sets(int a)
    {
        this.h=a;
    }
    public int gets(){
        return h;
    }
}
class derived extends base{
    int y;
    derived(){
        System.out.println("I am in derived class");
    }
    derived(int a,int b){
        super(b);
        System.out.println("I am in derived class parameter "+a);
    }
    public void gets(int a)
    {
        this.y=a;

    }
   
    public int gets(){
        return y;
    }
}
public class inheritance {
    public static void main(String[] args)
    {
        // derived d=new derived(3,4);
            // d.sets(9);
    }
    
}
