class Showing{
    public int x;
    private int y;
    final int yu=0;         // final variable declaration
    public Showing(){
        System.out.println(" I am in a default constructor");
    }
    public Showing(int y, int h){       // values passed as call by value 
        // System.out.println(" I am in a parameterised constructor");
        this.x=y+1;
        this.y=h+2;
    }
    public Showing(Showing s){      // object passed as call by refrence 
        this.x=s.x;
        this.y=s.y;
        // s.yu=this.x;     cannot make assigned to final keyword
    }
    public void get(){
        System.out.println("The value of "+this+"is:"+this.x+" "+this.y);
    }
}
public class PrivaAndPubli {
    public static void main(String[] args){
        Showing s1=new Showing(234,345);
    //    s1.x=9;
    //    s1.y=98;      this give as error as it is private within the class and cannot 
    //                   be accesible to outside of it.
        
        Showing s2=new Showing(s1);
        s1.get();
        s2.get();
        
    }
    
}
