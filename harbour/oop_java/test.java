class test{
    int x;
    static int y, z;

    void m1(){
        //instance area
        x = 66;
        System.out.println("x = " + x);
    }
    static void m2(){
        //static area
        test tt = new test();
        tt.x = 69;
        System.out.println("x = " + tt.x);
    }
    public static void main(String[] args){
        test t = new test();
        t.x = 5;
        t.y = 10;

        System.out.println(t.x + " " + t.y);

        test t2 = new test();
        t2.x = 15;
        t2.y = 20;

        System.out.println(t2.x + " " + t2.y);
        System.out.println(t.x + " " + t.y);
        t.m1();
        t.m2();
        //t.m1();
    }
}