class main{
    // int p = 10, q = 20;
    // void m1(){
    //     System.out.println(p+q);
    // }
    // void m2(){
    //     p = 2; q = 12;
    //     System.out.println(p+q);
    //     System.out.println(this.p + this.q);
    // }
    // void m3(){
    //     System.out.println(p+q);
    //     System.out.println(this.p + this.q);
    // }

    // public static void main(String[] args){
    //     main obj = new main();
    //     obj.m1();
    //     obj.m2();
    //     obj.m3();
    //     main ob2 = new main();
    //     ob2.m1();
    //}
    main(){
        this(61);
        System.out.println("Hello");
    }
    main(int x){
        System.out.println(x);
        System.out.println("batch");
    }
    public static void main(String[] args){
        main obj = new main();
    }
}