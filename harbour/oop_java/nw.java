class nw{
    int p = 10, q = 11;
    void m1(int a, int b){
        System.out.println("Sum: " + (a + b));
        p = 1;
        q = 2;
    }
    void m2(){
        System.out.println(("Sum: " + p + q));
    }
    public static void main(String[] args){
        nw obj = new nw();
        obj.m1(20,30);
        obj.m2();

        nw obj2 = new nw();
        obj2.m2();
    }
}