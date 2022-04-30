import java.util.Scanner;
public class TwoDimen {
    public static void main(String[] args){
        System.out.println("Enter the rows: and columns:   for your two dimensional array");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int [][] arr1=new int [n][m];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.println("Enter the value at index"+i+" "+j);
                arr1[i][j]=sc.nextInt();
            }
        }
        sc.close();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.println("The valua at index of arr1["+i+"] ["+j+"] is:"+arr1[i][j]);
            }
        }
    }
    
}
