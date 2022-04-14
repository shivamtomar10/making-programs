public class array {
    public static void main(String[] args){
        int [] marks={1,2,3,4,5};
        for(int a:marks)
        {
            System.out.println(a);
        }
        int [][] m1={{1,2,3},{4,5,6},{7,8,9}};
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.println(m1[i][j]);
            }
        }
    }
    
}
