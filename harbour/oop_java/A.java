import java.io.*;
class A {
    public static void main(String[] args) {
        // System.out.println("Hello World");
        // //int res = 10 / 0;
        // System.out.println("check");
        // try{
        // int res = 10 / 0;
        // System.out.println(res);
        // }
        // catch(ArithmeticException e){
        // System.out.println("Error: Division by zero");
        // }
        // System.out.println("check 2");

        // try{
        //     String s = "monki";
        //     System.out.println(s.charAt(10));
        //     int res = 10 / 0;
        //     int a[] = { 1, 2, 3, 4};
        //     System.out.println(a[8]);
        // }

        // catch (ArithmeticException e) {
        //     System.out.println("Error: Division by zero");
        // }
        // catch(ArrayIndexOutOfBoundsException e){
        //     System.out.println("hello");
        // }
        // catch (Exception e) {
        //     System.out.println(e);
        // }

        //checked exception
        try{
        FileInputStream fr = new FileInputStream("xmpl.txt");
        }
        catch(FileNotFoundException e){
            System.out.println("Error: File not found");
        }
    }
}