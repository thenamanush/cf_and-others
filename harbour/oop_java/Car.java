import java.util.Scanner;

public class Car {
    String color;
    int model;

    public void print() {
        System.out.println("Color: " + color + ", Model: " + model);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Car car1 = new Car();
        System.out.print("Enter color: ");
        car1.color = sc.nextLine();
        System.out.print("Enter model: ");
        car1.model = sc.nextInt();
        car1.print();
    }
}
