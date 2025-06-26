import 'dart:io';

main() {
  // print("hello world");
  // var firstname = 'Bashar';
  // String lastname = 'Numan';
  // print(firstname + ' ' + lastname);

  stdout.writeln('what is your name : ?');
  String name = stdin.readLineSync()!;
  print('my name is $name');

  // int num = int.parse(stdin.readLineSync()!);
  // print("your age is $num");

  print(name.codeUnits);

  print(name.length);
  print(name.toLowerCase());
}
