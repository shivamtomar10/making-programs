class En{
    private int x;
    public void sets(int a){
        this.x=a;
    } 
    public int gets(){
        return x;
    }
}
public class methodoverloading {
    public static void f1(){
        System.out.println("this is first overloading");
    }
    public static void f1(int a)
    {
        System.out.println("This is sacond function overloading" + a);
    }

    public static void main(String[] args)
    {
        f1();
        f1(2);
        En f=new En();
        f.sets(2);
       System.out.println(f.gets());
    }
    
}
