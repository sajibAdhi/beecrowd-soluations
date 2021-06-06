import 'dart:io';

void main() {
  dynamic a = stdin.readLineSync();
  dynamic b = stdin.readLineSync();
  dynamic X = add(int.parse(a), int.parse(b));

  print("X = $X");
}

dynamic add(dynamic m, dynamic n) => m + n;
