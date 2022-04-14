public class varargs {
    public static int add(int...arr){
        int result=0;
        for(int a:arr){
            result+=a;
        }
        return result;
    }
    public static void main(String[] args) {
        int h=add(2,3,4,5,6);
        System.out.println(h);
    }
    
}
