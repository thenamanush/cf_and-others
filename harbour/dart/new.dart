void main() {
  int num1 = 100;
  double num2 = 100.3;
  num num3 = 50;
  num num4 = 50.6;

  num sum = num1 + num2 + num3 + num4;

  print("num1 is $num1");
  print("num2 is $num2");
  print("num3 is $num3");
  print("num4 is $num4");
  print(sum.toStringAsFixed(2));

  String s = ''' this is gonna be a 
  multi line comment
  i'm gonna print hello world''';
  print(s);

  //  arithmatic operators
  int summ = 10 + 2;
  int sub = 10 - 2;
  int unary_minus = -num1;
  int mul = 10 * 4;
  double div = 12 / 2;
  int div2 = num1 ~/ num2;
}
