import java.util.Scanner;
import java.util.Arrays;
class Node{
    int data;
    Node next;
}
public class MaxMinValueNode {
    public static void printElement(Node n){
        int i=1;
        while(n.next!=null){
            System.out.println("The value of "+i+" Node is:"+n.data);
            n=n.next;
            i++;
        }
    }
    public static void maxMinNode(Node n,int a){
        // Node n1=new Node();
       
        // n1=n;
        int i=0;
        int [] arr=new int[a];
        while(n.next!=null){
            int h=n.data;
            arr[i++]=h;
            n=n.next;
          
        }
        Arrays.sort(arr);
        System.out.println("The smallest node has data:"+arr[0]);
        System.out.println("The maximun node has data:"+arr[arr.length-1]);
    }
    public static void main(String [] args){
        System.out.println("This program is used to find max and min of the Singly Linked List");
        System.out.print("Enter the no of nodes:");
        Scanner sc=new Scanner(System.in);
        try{
            int nodes=sc.nextInt();
            int a=nodes;
            Node head=new Node();
            Node ptr=head;
            int i=1;
            while(nodes>0){
                System.out.print("Enter the value of your "+i+" Node:");
                int h=sc.nextInt();
                ptr.data=h;
                Node n1=new Node();
                ptr.next=n1;
                ptr=ptr.next;
                nodes--;
                i++;
            }
            // printElement(head);
       
            maxMinNode(head,a);
        }
        catch(Exception e){
            System.out.println("Your input is Invalid!");
        }
        finally{
            sc.close();
        }
    }
    
}
