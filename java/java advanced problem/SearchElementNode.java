import java.util.Scanner;
class Node{
    int data;
    Node next;
}
public class SearchElementNode {
    public static void searchingNodeElement(Node n,int h){
        int i=1;
        while(n.next!=null){
            if(h==n.data){
                System.out.println("The element find at "+i+" Node");
            }
            i++;
            n=n.next;
        }
    }
    public static void main(String [] args){
    System.out.println("This program is to search an element in singly linked list");
    System.out.print("Enter the no of nodes:");
    Scanner sc=new Scanner(System.in);
        try{
            int nodes=sc.nextInt();
            Node head=new Node();
            Node ptr=head;
            int i=1;
            while(nodes>0){
                Node n1=new Node();
                System.out.print("Enter the data of "+i+" Node:");
                int h=sc.nextInt();
                ptr.data=h;
                ptr.next=n1;
                ptr=ptr.next;
                i++;
                nodes--;
            }
            System.out.print("Enter the element you want to search in singly linked list:");
            int u=sc.nextInt();
            searchingNodeElement(head, u);
        }
        catch(Exception e){
            System.out.println("Your input is invalid!");
        }
        finally{
            sc.close();
        }
    }
    
}
