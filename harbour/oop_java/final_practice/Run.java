interface Mobile {
    void call();
}

interface add{
    int add(int a, int b);
}

class X<T>{
    private T data;

    public X(T data){
        this.data = data;
    }
    public void getter(){
        System.out.println(data);
    }
}
class Run {
    public static void main(String[] args) {
        Mobile obj = () -> System.out.println("hi");
        obj.call(); // Output: hi
        add ob = (a, b) -> a+b;
        int res = ob.add(10,20);
        System.out.println(res);

        X<Integer> num = new X<>(123);
        num.getter();
        X<String> st = new X<> ("frzna");
        st.getter();
    }
}
