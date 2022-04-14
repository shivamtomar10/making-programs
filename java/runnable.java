class Mythread1 implements Runnable{
    public void run() {
        int i=0;
        while(i<=9){
        System.out.println("I am in Mythread1");
        i++;
        }
    }
}
class Mythread2 implements Runnable{
    public void run(){
        int i=0;
        while(i<5){
        System.out.println("I am in Mythread2");
        i++;
    }
    }
}
public class runnable {
    public static void main(String [] args){
     
        Mythread1 t1=new Mythread1();
        Mythread2 t2=new Mythread2();
        Thread g1=new Thread(t1);
        Thread g2=new Thread(t2);

        g1.start();
        try{
            g1.join();// first complete the g1 task then g2 one
        }
        catch(Exception e){
            System.out.println("There is an error in completion of g1");
        }
        g2.start();
        

    }
    
}
