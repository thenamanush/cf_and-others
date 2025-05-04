import java.io.*;

class A {
    void m1() { // ArithmeticException
        System.out.println(10 / 0);
    }

    void m2() { // ArrayIndexOutOfBoundsException
        int ar[] = { 1, 2, 3 };
        System.out.println(ar[5]);
    }

    void m3() { // StringIndexOutOfBoundsException
        String str = "hello";
        System.out.println(str.charAt(10));
    }

    void m4() throws FileNotFoundException { // FileNotFoundException
        FileReader file = new FileReader("hi.txt"); // Try to open file
    }

    void m5() { // NullPointerException
        String str = null;
        System.out.println(str.length());
    }
}

class two {
    void test() {
        try {
            int x = 10 / 0;
            int arr[] = { 1, 2, 3 };
            System.out.println(arr[0]);
            String s = null;
            int y = s.length();
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception caught: abc");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Index Out Of Bounds Exception caught: EFG");
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

class B {
    void m3() {
        System.out.println(10 / 0);
    }

    void m2() {
        System.out.println("Hello");
        m3();
    }

    void m1() {
        System.out.println("Hello 2");
        try {
            System.out.println("Hello 3");
            m2();
        } catch (ArithmeticException e) {
            e.printStackTrace();
        } finally {
            System.out.println("etae ki final");
        }
    }
}

class mn {
    public static void main(String[] args) {
        // two t = new two();
        // t.test();
        // B ob = new B();
        // ob.m1();
        try{
        FileInputStream f = new FileInputStream("hello.txt");
        // FileOutputStream ff = new FileOutputStream("hello.txt", true);
        System.out.println("file ache!");
        int i;
        while((i = f.read())!= -1){
        System.out.print((char)i);
        }
        // String s = "notun line dilam";
        // ff.write(s.getBytes());

        }
        catch(Exception e){
        System.out.println("file nai");
        }
        // A ob = new A();
        // try{
        //     ob.m4();
        // }
        // catch(FileNotFoundException e){
        //     System.out.println(e);
        // }
    }
}