import java.lang.reflect.Array;
import java.util.*;
public class arraylist{
    public static void main(String[] args){
        ArrayList <Integer> r3=new ArrayList();
        r3.add(2);
        r3.add(345);
        r3.add(654);
        // for(int i=0;i<r3.size();i++)
        // {
        //     System.out.println(r3.get(i));
        // }
        // r3.remove(2);       // to remove element from particular index
        // for(int i=0;i<r3.size();i++)
        // {
        //     System.out.println(r3.get(i));
        // }
        r3.add(0,567);
        // for(int i=0;i<r3.size();i++){
        //     System.out.println(r3.get(i));
        // }
        // r3.clear();
        // for(int i=0;i<r3.size();i++){
        //     System.out.println(r3.get(i));
        // }
       System.out.println(r3.contains(567)); 
       System.out.println(r3.isEmpty());
       System.out.println(r3.indexOf(2));
                    




    }
}