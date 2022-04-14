import java.util.Scanner;
public class d1 {
    public static void main(String[] args){

        Scanner sc =new Scanner(System.in);
        System.out.print("Enter your name:");

        String name=sc.nextLine();
        System.out.print("Enter the marks in five subjects:");
        float a=sc.nextFloat();sc.close();
        float b=sc.nextFloat();sc.close();
        float c=sc.nextFloat();sc.close();
        float d=sc.nextFloat();sc.close();
        float e=sc.nextFloat();sc.close();

        float total=a+b+c+d+e;
        float percentage=(total*100)/500;
        System.out.print("The percentage of the student:");
        System.out.print(name);
        System.out.printf("is:%f",percentage);

    }
}
