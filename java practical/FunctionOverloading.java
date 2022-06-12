
//ELEVENTH PROGRAM OF JAVA PRACTICAL


class Function_Overloading{
    double area;
    /*public void area(int s){
        area=s*s;
    }*/
    public void area(double t){
        System.out.println("Method of Double called");
    }

    public void area(int i,int j){
        System.out.println("Method of integer with two parameter called");
    }
}



public class FunctionOverloading {
    public static void main(String [] args){
        Function_Overloading obj1=new Function_Overloading();
        obj1.area(2);// passing integer as parameter 


        // as you can see that there is no function which accepts single integer value 
        // Now java will automatic give to double as automatic type conversion
    }
    
}
