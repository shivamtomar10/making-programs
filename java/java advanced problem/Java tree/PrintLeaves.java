import java.util.Scanner;
class Node2{
    int data;
    Node left;
    Node right;

}
public class PrintLeaves{
    public static void creatingNodeOfTree(Node n,int d){
        if(n!=null){
            n.data=d;
            n.left=null;
            n.right=null;
        }
    }
    public static int printElementOfLeaves(Node head){
        
        while(head!=null){
            printElementOfLeaves(head.left);
            printElementOfLeaves(head.right);
            if(head.left==null || head.right==null){
                System.out.print(head.data+" ");
                return 1;

            }
            return 1;
        }
            
        return 1;
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to print the leaves of the tree");
        // making random tree
        // creating nodes 
        Node p1=new Node();
        Node p2=new Node();
        Node p3=new Node();
        Node p4=new Node();
        Node p5=new Node();
        Node p6=new Node();
        Node p7=new Node();
        Node p8=new Node();
        Node p9=new Node();
        
    // setting the data into the nodes

    creatingNodeOfTree(p1, 6);
    creatingNodeOfTree(p2, 2);               //       6
    creatingNodeOfTree(p3, 3);              //       / \
    creatingNodeOfTree(p4, 1);              //      2   9
    creatingNodeOfTree(p5, 9);              //         / \  
    creatingNodeOfTree(p6, 8);              //        8   7
    creatingNodeOfTree(p7, 7);              //       / \  / \
    creatingNodeOfTree(p8, 10);             //      3   1 5  10
    creatingNodeOfTree(p9, 5);

    //joining the nodes
    p1.left=p2;
    p1.right=p5;
   
    p5.left=p6;
    p5.right=p7;
    
    p6.left=p3;
    p6.right=p4;

    p7.left=p9;
    p7.right=p8;

        //printing the leaves of the tree
        System.out.println("The leaves nodes of the tree are as follows:");
        printElementOfLeaves(p1);
        sc.close();

    }
}