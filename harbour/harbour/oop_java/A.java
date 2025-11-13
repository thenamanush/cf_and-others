import java.io.*;
import java.lang.*;

public class A {
    void m1() {
        try {
            FileInputStream f = new FileInputStream("batch61B.txt");
        } catch (FileNotFoundException e) {
            System.out.println("Bhago");
        }
        System.out.println("Confusion");
        System.out.println(10 / 0);
        System.out.println("So at last!");
    }

    void m2() {
        m1();
        System.out.println("Eta dekhailam!");
    }

void m3() {
try {
m2();
int a[] = new int[5];
System.out.println(a[7]);
} catch (ArithmeticException e) {
System.out.println("amke maf kore den");
} catch
(ArrayIndexOutOfBoundsException e) {
System.out.println("Boro Gozob");
} finally {
System.out.println("Oh No!");
}
}
    public static void main(String[] args) {
        A ob = new A();
        ob.m3();
    }
}