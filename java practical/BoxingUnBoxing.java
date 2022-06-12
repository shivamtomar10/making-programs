
//FOURTEEN PROGRAM OF JAVA PRACTICAL

public class BoxingUnBoxing {
    public static void main(String [] args){
        // Boxing ----> conversion of primitive datatypes into Wrapper classes

        int a=43;
        Integer g=new Integer(a);  // as it has been deprecated that why its showing warning by underline
        System.out.println(g);

        //Unboxing ----> conversion of wrapper into primitive data types

        Integer i1=new Integer(23);
        int h=i1;
        System.out.println(h);





    }
    
}
