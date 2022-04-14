// import java.util.Scanner;
public class stringmethod {
    public static void main(String[] args){
            // Scanner sc=new Scanner(System.in);
            String name="Shivam tomar";
            
            String g=name.toLowerCase(); // to lower case
            String h=name.toUpperCase(); // to uppercase
            System.out.println(g);
            System.out.println(h);  
            System.out.println(name.length()); //  length of the String

            System.out.println(name.compareTo(h)); //not knowing

            System.out.println(name.trim());  // removing leading and trailing spaces

            System.out.println(h.substring(3));// substring starting from index 3

            System.out.println(name.substring(3,6));// starting index and ending index

            System.out.println(name.replace('S','D'));// replacing S with D

            System.out.println(name.startsWith("Sh"));// string starts with
            System.out.println(name.endsWith("tomar"));// string ends with

            System.out.println(name.charAt(2)); // string at cahracter at index

            System.out.println(name.indexOf("to"));// return the index of to in string

            System.out.println(name.indexOf("t",3));// return the index of the t starting with index 3

            // if finding string is not in original string then t retruns -1

            System.out.println(name.equals("Shivam tomar"));    //checking string equality with case sensitive 
            System.out.println(name.equalsIgnoreCase("SHIVAM TOMAR")); // checking string equality without case sensitivity

            System.out.println(name.lastIndexOf('m',4));
            // System.out.println(name.Index('m'));

            



    }
    
}
