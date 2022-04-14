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

public class thread {
    public static void main(String [] args){
        MyThread1 t1=new MyThread1();
        MyThread2 t2=new MyThread2();
        t1.start();
        t2.start();
       // t1.setPriority(MIN_PRIORITY);
    }    
}


// thread life cycle 

// 1.new
// 2.runnable
//             non runnbale
// 3.running
// 4.terminated


