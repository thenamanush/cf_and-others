public class Car {
    String color;
    int model;

    public void print() {
        System.out.println("Color: " + color + ", Model: " + model);
    }

    public static void main(String args[]) {
        Car car1 = new Car();
        car1.color = "Red";
        car1.model = 2002;

        car1.print();
    }
}
