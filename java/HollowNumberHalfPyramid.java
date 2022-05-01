import java.util.Scanner;
class HollowNumberHalfpyramid {
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Hollow Number Half Pyramid Formation");
        System.out.print("Enter the no of rows:");
        try{
            int a=sc.nextInt();
            int i,z=1;
            for( i=1;i<a;i++){
                System.out.print(1);
                if(i==2){
                System.out.print(" "+2);
             }
                else{
                    for(int k=1;k<=z;k++){
                        System.out.print(" ");
                    }
                    z+=2;
                }
                if(i>=3){
                    System.out.print(i);
                }
                

                System.out.print("\n");
            }
            if( i==a){
                for(int j=1;j<=a;j++){
                    System.out.print(j+" ");
                }
            }

        }
        catch(Exception e){
            System.out.println(e);
        }
        finally{
            sc.close();
        }
    }
    
}
