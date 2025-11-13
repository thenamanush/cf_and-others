import java.io.*;
class three{
    public static void main(String[] args) {
        String ss = "  Garfield. Tom. Fellix.  ";
        String s1 = ss.trim(); // removing space
        System.out.println(s1);
        s1 = s1 + " Cheshire cat"; // adding new string
        System.out.println(s1);
        String s2 = s1.substring(0, 6); //taking substring
        System.out.println(s2);
        


        String [] last = s1.split(". "); // splitting based on "."
        for(String i : last){
            System.out.println(i);
        }
    }
}