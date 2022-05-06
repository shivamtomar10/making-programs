import java.util.Scanner;
class Node{
    int data;
   Node left;
   Node right;

}

public class Inorder{
    public static void creatingNode(Node n,int d){
        if(n!=null){
            n.data=d;
            n.left=null;
            n.right=null;
        }
    }
    public static int inorderTraversal(Node m){
        while(m!=null){
            inorderTraversal(m.left);
            System.out.print(m.data+" ");
            inorderTraversal(m.right);
            return 1;
        }
        return 1;
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to traverse the tree in inorder");
        // we are gonna make a random tree

        Node p1=new Node();
        Node p2=new Node();
        Node p3=new Node();
        Node p4=new Node();
        Node p5=new Node();
        Node p6=new Node();
       
        creatingNode(p1, 4);
        creatingNode(p2, 1);
        creatingNode(p3, 2);
        creatingNode(p4, 6);
        creatingNode(p5, 7);
        creatingNode(p6, 9);


            //     4
            //    / \
            //   2   6
            //  /     \
            // 1       7
            //          \
            //           9

        // joining nodes as to form a tree

        p1.left=p3;
        p1.right=p4;
        p3.left=p2;
        p4.right=p5;
        p5.right=p6;

        // for printing nodes of tree in inorder traversal

       inorderTraversal(p1);

        sc.close();

    }
}