main() {
  // print("hello world");
  // var firstname = 'Bashar';
  // String lastname = 'Numan';
  // print(firstname + ' ' + lastname);

  // stdout.writeln('what is your name : ?');
  // String name = stdin.readLineSync()!;
  // print('my name is $name');

  // int num = int.parse(stdin.readLineSync()!);
  // print("your age is $num");

  // String name = "tarek";

  // print(name.codeUnits);

  // print(name.length);
  // print(name.toLowerCase());
  // String tarek = "   zarek tia";
  // print(tarek.trim());

  String item1 = "Apple";
  String item2 = "Apple";
  String item3 = "basket";

  print(item1.compareTo(item2));
  print(item1.compareTo(item3));

  String s =
      "tarek is a good boy, he likes milk, doctor says milk is good for health";
  print(s.replaceAll("milk", "water"));

  // split
  String x = "A, B, C, D, E";
  List<String> ls = x.split(",");
  print(x);
  print(ls);
  print(ls[3]);

  for (String it in ls) {
    print(it.trim());
  }

  print(s.substring(11, 20));
  print(s.substring(11));

  // reverse
  String s3 = "tarek";
  print(s3.split("").reversed.join());

  print(s3[0].toUpperCase() + s3.substring(1));
}
