import 'dart:io';

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

void main() {
  // checking if number is even or odd
  even_odd();
  // checking vowel or consonant
  vowel_consonant();
  // checking value of number
  pos_neg();
  //printing name 100 times
  name();
}
