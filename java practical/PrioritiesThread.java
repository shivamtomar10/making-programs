
//TWENTYONETH PROGRAM OF JAVA


class MyThread1 extends Thread{
    public void run(){
        while(true){
            System.out.println("I am in run method in Thread1");
        }
    }
    // MyThread(int a){
    //     System.out.println("I am in MyThread constructor"+a);
    // }
}
class MyThread2 extends Thread{
    public void run(){
        while(true){
            System.out.println("I am in run method in Thread2");
        }
    }
}

public class PrioritiesThread {
    public static void main(String [] args){
        MyThread1 t1=new MyThread1();
        MyThread2 t2=new MyThread2();
        t1.start();
        t2.start();
       
    }    
}
