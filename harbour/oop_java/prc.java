class prc{
    static class a{
        a(){
            System.out.println("super 0 args");
        }
        a(int x){
            System.out.println("super 1 args");
        }
    }
    static class b extends a{
        b(){
            this(15);
            System.out.println("child 0 args");
        }
        b(int a){
            System.out.println("child 1 args");
        }
    }
    public static void main(String[] args) {
        b obj = new b();
    }
}