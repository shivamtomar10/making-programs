
// SIXTEENTH PROGRAM PART 1 OF JAVA PRACTICAL
package ForMultiFileProgramfolder.MultiLevelPackage;



public class FibonacciSeries {
    public void generatingFibonacciSeries(int n){
        int [] arr=new int [n+2];
        arr[0]=0;
        arr[1]=1;
        System.out.println("FibonacciSeries generate as:");
        System.out.print(0+" "+1+" ");
        for(int i=2;i<n;i++){
            arr[i]=arr[i-1]+arr[i-2];
            
            System.out.print(arr[i]+" ");
        }

    } 
    
}
