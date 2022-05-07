import java.util.Scanner;
public class VowelOrConso {
    public static void checkingVowelConsonant(String s){
        int l1=s.length();
        for(int i=0;i<l1;i++){
            if(s.charAt(i)=='A' || s.charAt(i)=='E' || s.charAt(i)=='I' || s.charAt(i)=='O'|| s.charAt(i)=='U'||s.charAt(i)=='a' || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o'|| s.charAt(i)=='u' ){
                System.out.println("The Character '"+s.charAt(i)+"' is a vowel");
            }
            // else if(s.charAt(i)==('U'+0020)){
            //     continue;
            // }
            else{
                System.out.println("The character '"+s.charAt(i)+"' is a consonant");
            }
        }
    }
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("This program is used to check for vowel or consonant");
        System.out.print("Enter the alphabet or the string for check:");
        String h=sc.nextLine();
        sc.close();
        checkingVowelConsonant(h);
    }
    
}
