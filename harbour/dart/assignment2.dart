import 'dart:io';

import 'assignment.dart';

void even_odd() {
  print('Enter a number:');
  int num = int.parse(stdin.readLineSync()!);

  if ((num & 1) == 0) {
    print('even');
  } else {
    print('odd');
  }
}

void vowel_consonant() {
  print('enter a charecter : ');
  String c = stdin.readLineSync()!;

  if (c == 'a' ||
      c == 'e' ||
      c == 'i' ||
      c == 'o' ||
      c == 'u' ||
      c == 'A' ||
      c == 'E' ||
      c == 'I' ||
      c == 'O' ||
      c == 'U') {
    print('vowel');
  } else {
    print('consonant');
  }
}

void pos_neg() {
  int num = int.parse(stdin.readLineSync()!);
  if (num < 0) {
    print('negative');
  } else if (num > 0) {
    print('positive');
  } else {
    print('zero');
  }
}

void name() {
  int i = 5;
  while (i-- > 0) {
    print("Noman");
  }
}

void sum_of_numbers() {
  print("enter start : ");
  int start = int.parse(stdin.readLineSync()!);
  print('enter end : ');
  int end = int.parse(stdin.readLineSync()!);

  int sum = 0;
  for (int i = start; i <= end; ++i) {
    sum += i;
  }
  print('sum is : $sum ');
}

void multiplication_table() {
  for (int i = 1; i <= 10; ++i) {
    print('5 * $i = ${5 * i}');
  }
}

void times_table() {
  for (int i = 1; i < 10; ++i) {
    for (int j = 1; j <= 10; ++j) {
      print('$i * $j = ${i * j}');
    }
  }
}

void calculator() {
  print('Enter the first number:');
  int num1 = int.parse(stdin.readLineSync()!);
  print('Enter the second number:');
  int num2 = int.parse(stdin.readLineSync()!);

  print('Enter the operation (+, -, *, /):');
  String op = stdin.readLineSync()!;

  switch (op) {
    case '+':
      print('Result: ${num1 + num2}');
      break;
    case '-':
      print('Result: ${num1 - num2}');
      break;
    case '*':
      print('Result: ${num1 * num2}');
      break;
    case '/':
      if (num2 != 0) {
        print('Result: ${num1 / num2}');
      } else {
        print('Cannot divide by zero.');
      }
      break;
    default:
      print('Invalid operation.');
  }
}

void print_num(){
  for(int i = 1; i <= 100; ++i){
    if(i == 41){
      continue;
    }
    print(i);
  }
}

void main() {
  // checking if number is even or odd
  even_odd();
  // checking vowel or consonant
  vowel_consonant();
  // checking value of number
  pos_neg();
  //printing name 100 times
  name();
  // sum of natural numbers
  sum_of_numbers();
  // multiplication table
  multiplication_table();
  // times table of 1 - 9
  times_table();
  // calculator using dart
  calculator();
  // printing all numbers except 41
  print_num();
}
