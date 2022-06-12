
//SEVENTEENTH PROGRAM PART 2 OF JAVA PRACTICAL



import ForMultiFileProgramfolder.ProtectionInClasses;

class Protection extends ProtectionInClasses{
    public void readStringExtends(){
        System.out.println("Public String accessible within package : " + s1);
        System.out.println("Private String is not accessible within package");
        System.out.println("Protected String accessible within package : " + s3);
    }
    
}
public class ProtectionInClasses2{
    public static void main(String[] args){
        Protection p1=new Protection();
        p1.readStringExtends();
    }
}