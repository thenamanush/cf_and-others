import 'dart:math';

void main() {
  // name print function
  print_name();

  // even number print function
  even(1, 10);

  //greet function
  greet('John');

  //random password generator
  // chatgpt marsi
  print("Random Password: ${generatePassword(12)}");

  // area of circle
  area(4.5);

  // reversed string
  reverseString('hello');

  // function to print power
  pow(5, 3);

  // fucntion for sum
  int sum = add(5, 7);
  print("Sum is: $sum");

  // function for max number among 3
  int max = maxNumber(5, 10, 3);
  print("Max is: $max");

  // checkign even odd
  bool flag = check(7);
  print("Is even? $flag");


  // function with default value
  user("Noman", 25);
  user("Biman", 30, false);


  // default area function
  double rectArea1 = calculateArea(5, 4);
  double rectArea2 = calculateArea();
  print("valued area: $rectArea1");
  print("default area: $rectArea2");
}

void print_name() {
  print("Noman");
}

void even(int start, int end) {
  for (int i = start; i <= end; ++i) {
    if (i & 1 != 1) {
      print(i);
    }
  }
}

void greet(String name) {
  print('Hello, $name');
}

String generatePassword(int length) {
  const String chars =
      'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#\$%^&*()_+-=';
  Random rand = Random.secure();
  return List.generate(length, (index) => chars[rand.nextInt(chars.length)]).join();
}

void area(double radius) {
  print(pi * radius * radius);
}

void reverseString(String line) {
  String reversed = line.split('').reversed.join();
  print("Reversed: $reversed");
}


void power(int base, int exponent) {
  int result = base == 0 ? 0 : pow(base, exponent).toInt();
  print("$base^$exponent = $result");
}


int add(int a, int b) {
  return a + b;
}

int maxNumber(int a, int b, int c) {
  return max(max(a, b), c);
}

bool check(int number) {
  return number & 1 != 1;
}

void user(String name, int age, [bool isActive = true]) {
  print("Name: $name, Age: $age, Active: $isActive");
}

double calculateArea([double length = 1, double width = 1]) {
  return length * width;
}
