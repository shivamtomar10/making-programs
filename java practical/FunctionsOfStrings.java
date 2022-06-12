

//EIGTH PROGRAM OF JAVA PRACTICAL


public class FunctionsOfStrings {
    public static void main(String [] args){
        String name="Shivam tomar";
        String h=name.toUpperCase();
        StringBuffer s1=new StringBuffer("Java is an platform independent");

        //string functions

        System.out.println(name.length());
        System.out.println(name.compareTo(h));
        System.out.println(h.substring(3));
        System.out.println(name.replace('S','D'));
        System.out.println(name.equals("Shivam tomar")); 
        

        //string buffer functions
        
        s1.setCharAt(3, 'K');
        System.out.println("After set"+s1);
        System.out.println(s1.equals(new StringBuffer("Shivam")));
        System.out.println(s1.append("and not pure object oriented language"));
        System.out.println(s1.insert(1,"shivam"));
        

    }
    
}
