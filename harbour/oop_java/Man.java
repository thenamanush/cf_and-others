
class animal {
    void eat() {
        System.out.println("animal eats");
    }
}

class dog extends animal {
    void eat() {
        System.out.println("dog eats");
        super.eat();
    }

    void bark() {
        System.out.println("dog barks");
    }
}
class Man{
    public static void main(String[] args) {
        animal a = new dog();
        a.eat();
    }
}