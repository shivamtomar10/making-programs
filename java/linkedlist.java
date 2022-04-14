import java.util.LinkedList;
public class linkedlist {
    public static void main(String[] args){
        LinkedList<Integer> li=new LinkedList();
        li.add(344);
        li.add(567);
        li.add(12);
        for(int i=0;i<li.size();i++)
        {
            System.out.println(li.get(i));
        }
        // li.removeLast();
        // li.add(2,4567);
        try{
            // int i=0;
            if(li.size()<0)
            {
                throw new Exception();
            }
            li.getFirst();
        }
        catch(Exception e){
            System.out.println("cannot answered");
        }


    }
    
}
