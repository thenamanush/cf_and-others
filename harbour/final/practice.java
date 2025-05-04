import java.io.*;

class check {

    // exception examples

    // void m1(){
    // int x = 10 / 0;
    // System.out.println(x);
    // }

    // void m2(){
    // int a[] = {1,3,5};
    // System.out.println(a[10]);
    // }
    // void m3(){
    // String name = "Numan";
    // System.out.println(name.charAt(10));

    // }
    // void m4(){
    // String ck = null;
    // System.out.println(ck.length());
    // }
    // void file() throws FileNotFoundException
    // {
    // FileReader file = new FileReader("hello.txt");
    // }

    //exception handling with details
    void m1(){
        int x = 10 / 0;
        System.out.println(x);
    }
    void m2(){
        System.out.println("hello 3");
        m1();
    }
    void m3(){
        System.out.println("hello 2");
        m2();
    }

}

class run {
    public static void main(String[] args) throws FileNotFoundException {
        //check ob = new check();

        // file read write
        // try {
        //     FileInputStream f = new FileInputStream("hello.txt");
        //     FileOutputStream ff = new FileOutputStream("hello.txt", true);
        //     String s = "Numan";
        //     ff.write(s.getBytes());
        //     System.out.println("file ache");

        //     int i;
        //     while ((i = f.read()) != -1) {
        //         System.out.print((char) i);
        //     }
        // } catch (Exception e) {
        //     System.out.println("file nai");
        // }
        // try{
        //     ob.m3();
        // }
        // catch(Exception e){
        //     e.printStackTrace();
        //     System.out.println(e.getMessage());
        // }
        // finally{
        //     System.out.println("etai ki final");
        // }


        // try{
        //     int num = Integer.parseInt("bima1n");
        //     System.out.println("erorr nai");
        // }
        // catch(Exception e){
        //     e.getMessage();
        // }

        //string er karbar

        String s1 = "lu";
        String s2 = "lu";
        String s3 = new String("lu");
        System.out.println(s1 == s2);
        System.out.println(s2 == s3);
        System.out.println(s1.equals(s3));

        // int [] ar = new int[3];
        // ar[0] = 1; ar[1] = 2; ar[2] = 3;
        // for(int i : ar){
        //     System.out.println(i);
        // }
        String s = "Numan tareq mahdi turjo";
        String [] s4 = s.split(" ");
        for(String i : s4){
            System.out.println(i);
        }
        String msg = "hello world";
        System.out.println(msg.replace("hello", "bonjour"));

        String greet = "hello noman";
        System.out.println(greet.trim());

        String nw = "hello world";
        System.out.println(nw.contains("bonjour"));
    }
}