
void main() {
  // Operations with laptop class
  Laptop l1 = Laptop(1, 'apple m1', 16);
  Laptop l2 = Laptop(2, 'Asus ROG', 32);
  Laptop l3 = Laptop(2, 'Lenovo Zenbook', 8);

  l1.display();
  l2.display();
  l3.display();

  // Operations with house class
  House h1 = House(1, "Shanti Nibash", 250000);
  House h2 = House(2, "Kingshuk", 150000);
  House h3 = House(3, "Chondrima House", 180000);

  List<House> houses = [h1, h2, h3];

  houses.forEach((it) {
    it.display();
  });

  // operations with Gender enum class
  for (var gender in Gender.values) {
    print(gender);
  }

  // Operations with cat class
  Cat myCat = Cat(1, "Mithi", "Brown", "Meow");
  myCat.display();

  // operations for getter and setter
  Camera c1 = Camera(1, "Canon", "Black", 500);
  Camera c2 = Camera(2, "Nikon", "Silver", 750);
  Camera c3 = Camera(3, "Sony", "Red", 900);

  c1.display();
  c2.display();
  c3.display();

  // using setter to update price
  c1.price = 550;
  print("After updating price of c1:");
  c1.display();

  // Bottle class Operations
  Bottle butol = Bottle.factory();
  butol.open();
}

class Laptop {
  int id;
  String name;
  int ram;

  Laptop(this.id, this.name, this.ram);

  void display() {
    print('id: $id');
    print('Model: $name');
    print('RAM: $ram GB');
  }
}

class House {
  int id;
  String name;
  double price;

  House(this.id, this.name, this.price);

  void display() {
    print("ID: $id");
    print("Name: $name");
    print("Price: $price");
  }
}

enum Gender { Male, Female, Others }

class Animal {
  int id;
  String name;
  String color;

  Animal(this.id, this.name, this.color);
}

class Cat extends Animal {
  String sound;

  Cat(int id, String name, String color, this.sound) : super(id, name, color);

  void display() {
    print("ID: $id");
    print("Name: $name");
    print("Color: $color");
    print("Sound: $sound");
  }
}

class Camera {
  int _id;
  String _brand;
  String _color;
  double _price;

  Camera(this._id, this._brand, this._color, this._price);

  int get id => _id;
  String get brand => _brand;
  String get color => _color;
  double get price => _price;

  set id(int id) => _id = id;
  set brand(String brand) => _brand = brand;
  set color(String color) => _color = color;
  set price(double price) => _price = price;

  void display() {
    print("ID: $_id");
    print("Brand: $_brand");
    print("Color: $_color");
    print("Price: $price");
  }
}

abstract class Bottle{
  void open();

  factory Bottle.factory() {
    return CokeBottle();
  }
}

class CokeBottle implements Bottle{
  void open() {
    print("Coke bottle is opened");
  }
}
