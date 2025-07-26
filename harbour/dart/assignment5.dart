import 'dart:io';

void name_list() {
  List<String> names = ['abul', 'babul', 'mokbul'];
  for (var it in names) {
    print(it);
  }
}

void fruits_set() {
  Set<String> fruits = {'Apple', 'Banana', 'Mango', 'Orange'};
  print('Fruits:');
  for (var fruit in fruits) {
    print(fruit);
  }
}

expenses() {
  List<int> numbers = [];

  print('size of expenditure : ');
  int n = int.parse(stdin.readLineSync()!);

  for (int i = 0; i < n; ++i) {
    print('Enter expense number ${i + 1}: ');
    int x = int.parse(stdin.readLineSync()!);
    numbers.add(x);
  }

  int sum = 0;
  for (int x in numbers) {
    sum += x;
  }

  print('Sum: $sum');
}

void days() {
  List<String> days = [];
  days.add('Monday');
  days.add('Tuesday');
  days.add('Wednesday');
  days.add('Thursday');
  days.add('Friday');
  days.add('Saturday');
  days.add('Sunday');
  print('Days:');
  for (var day in days) {
    print(day);
  }
}

friends() {
  List<String> friends = [
    'biraj',
    'mahin',
    'mesab',
    'dilu',
    'anisha',
    'abul',
    'babul',
  ];
  var key = friends.where((name) => name.toLowerCase().startsWith('a'));
  print('Friends starting with A:');
  for (var name in key) {
    print(name);
  }
}

dynam_map() {
  Map<String, dynamic> person = {
    'name': 'John Doe',
    'address': '123 Main Street',
    'age': 30,
    'country': 'USA',
  };
  // update country
  person['country'] = 'Canada';

  person.forEach((key, value) {
    print('$key: $value');
  });
}

keys_map() {
  Map<String, String> contact = {'name': 'Hablu', 'phone': '1234567890'};
  var keys = contact.keys.where((key) => key.length == 4);
  print('Keys with length 4:');
  for (var key in keys) {
    print(key);
  }
}

todo() {
  List<String> todo = [];
  while (true) {
    print('\nTo-Do App:');
    print('1. Add Task');
    print('2. Remove Task');
    print('3. View Tasks');
    print('4. Exit');
    print('Choose an option: ');
    String? option = stdin.readLineSync();

    switch (option) {
      case '1':
        print('Enter task to add: ');
        String task = stdin.readLineSync()!;
        todo.add(task);
        break;
      case '2':
        print('Enter task to remove: ');
        String task = stdin.readLineSync()!;
        if (todo.remove(task)) {
          print('Task removed.');
        } else {
          print('Task not found.');
        }
        break;
      case '3':
        print('Your tasks:');
        for (var t in todo) {
          print('- $t');
        }
        break;
      case '4':
        print('Exiting To-Do App. Goodbye!');
        return;
      default:
        print('Invalid option. Try again.');
    }
  }
}

void main() {
  // list of names
  name_list();
  // set of fruits
  fruits_set();
  // expenses from list
  expenses();
  // friends
  friends();
  // list of days
  days();
  // dynamic map
  dynam_map();
  // keys and map operations
  keys_map();
  // todo
  todo();
}
