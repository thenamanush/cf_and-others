import 'dart:io';

void name() {
  print("Noman");
}

void printt() {
  print('hello I am "john doe"');
  print("hello I am \"john doe\"");
}

double interest(double p, double t, double r) {
  return (p * t * r) / 100;
}

int square(int x) {
  return x * x;
}

void fullname(String f, String l) {
  print(f + " " + l);
}

void integer_operation(int x, int y) {
  int quotient = x ~/ y;
  int reminder = x % y;

  print("quotient $quotient");
  print("reminder $reminder");
}

void swap(int a, int b) {
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  print("after swapped : $a $b");
}

void spaceless() {
  String text = "  Hello  World  ";
  text = text.replaceAll((" "), "");
  print("Without spaces: $text");
}

void convert() {
  String txt = "321";
  int num = int.parse(txt);

  print(num);
}

void restaurant() {
  print("Enter total bill amount: ");
  double total = double.parse(stdin.readLineSync()!);

  print("Enter number of people: ");
  int people = int.parse(stdin.readLineSync()!);

  double to_pay = total / people;
  print("Each person should pay: \$${to_pay.toStringAsFixed(2)}");
}

void time() {
  double speed = 25, distance = 40;
  print((speed / distance) * 60);
  // multiplied with 60 to convert to minutes
}

void main() {
  // printing my name
  name();
  // printing with single and double quote
  printt();

  // declare constant int
  const int n = 7;

  // simple interest
  print(interest(100, 5, 10));

  // printing square with user input
  print("enter number: ");
  int num = int.parse(stdin.readLineSync()!);
  print(square(num));

  // printing full name from input
  print("enter first name");
  String f_name = stdin.readLineSync()!;
  print("enter last name");
  String l_name = stdin.readLineSync()!;
  fullname(f_name, l_name);

  // doing integer operation
  integer_operation(10, 3);

  // swapping two number
  swap(9, 5);

  // remove all space
  spaceless();

  // convert string to integer
  convert();

  // bill pay
  restaurant();

  // time to reach office
  time();
}
