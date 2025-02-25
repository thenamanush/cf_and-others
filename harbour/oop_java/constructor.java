class constructor{
    int a = 10, b = 15;
    void m1(int a, int b){
        System.out.println("Sum: " + (a + b));
        System.out.println(this.a + this.b);
    }

    void m2(){
        int a = 6;
        System.out.println(a);
        System.out.println(this.a);
    }

    public static void main(String[] args){
        constructor obj = new constructor();
        obj.m1(20,30);
        obj.m2();
    }
}