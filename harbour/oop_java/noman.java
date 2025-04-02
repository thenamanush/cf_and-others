public class noman{
    int a = 10;
    static int b = 7;

    noman(){
        this.a = 1;
        this.b = 2;
        System.out.println(1);
    }
    {
    System.out.println(2);
    }
    static {
        System.out.println(3);
    }
    void m1(int a){
        System.out.println(a);
        b = 5;
    }

    public static void main(String[] args){
        noman obj = new noman();
        System.out.println(obj.a + " " + obj.b);
    }
}
