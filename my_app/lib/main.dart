import 'package:flutter/material.dart';
import 'package:my_app/currency_converter_material_page.dart';
//import 'package:flutter/cupertino.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return const MaterialApp(home: CurrencyConverterMaterialPage());
  }
}
