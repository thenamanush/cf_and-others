// class X<T> {
//     private T data;

//     public X(T data) {
//         this.data = data;
//     }

//     public T getter() {
//         return data;
//     }
// }
// class run{
//     public static void main(String[] args) {
//         X<Integer> num = new X<>(123);
//         X<String> str = new X<>("noman");

//         System.out.println(num.getter());
//         System.out.println(str.getter());
//     }
// }


interface A{
    int sum(int a, int b);
}
interface three{
    int sum(int a, int b, int c);
}
class B{
    public static void main(String[] args) {
        A obj = (a, b) -> a+b;
        int res = obj.sum(10,20);
        System.out.println(res);
        three obj2 = (a, b, c) -> a+b+c;
        int ans = obj2.sum(10,20,30);
        System.out.println(ans);
    }
}