import java.util.Scanner;

class Node{
    int data ;
    Node next;
}
public class LinkedList{
    public static int  func1(Node n,int d){
     if(n==null){
        return 0;
     }
     else{
         n.data=d;
         n.next=null;
         return 1;
     }
        
    }
    public static void printnode(Node h){
        int u=1;
        while(h.next!=null){
            h=h.next;
            System.out.print("The Data of "+u+" Node is:"+h.data+" ");
            System.out.print("\n");
        u++;
        }
        System.out.println("The total node is:"+(--u));
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        
        System.out.println("This program is used to create node and to displaying total nodes with its data");
        
        System.out.print("Enter the total no of nodes you want to create:");
        int a=sc.nextInt();
       
        
        Node head=new Node();
        Node ptr=head;
        int p=1;
        while(a>0){
            Node n1=new Node();
            ptr.next=n1;
            System.out.print("Enter the value of " +p+" node");
            int d=sc.nextInt();
            func1(n1,d);
            ptr=ptr.next;
            p++;
            a--;
        }
        //for printing the data of the node
        printnode(head);

        sc.close();
    }
}