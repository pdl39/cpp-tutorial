#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

// global variables
int globalVar = 0;
const double PI = 3.14;

int main(int argc, char **argv)
{
  // basic stdout (print)
  cout << "Hello World" << endl;

  // variable declaration & initialization
  bool isTrue = true;
  char myLetter = 'A';

  // min & max limits for each numeric type
  cout << "Min unsigned short int: " << numeric_limits<unsigned short int>::min() << endl;
  cout << "Max unsigned short int: " << numeric_limits<unsigned short int>::max() << endl;
  cout << "Min short int: " << numeric_limits<short int>::min() << endl;
  cout << "Max short int: " << numeric_limits<short int>::max() << endl;
  cout << "Min unsigned int: " << numeric_limits<unsigned int>::min() << endl;
  cout << "Max unsigned int: " << numeric_limits<unsigned int>::max() << endl;
  cout << "Min int: " << numeric_limits<int>::min() << endl;
  cout << "Max int: " << numeric_limits<int>::max() << endl;
  cout << "Min unsigned long: " << numeric_limits<unsigned long>::min() << endl;
  cout << "Max unsigned long: " << numeric_limits<unsigned long>::max() << endl;
  cout << "Min long: " << numeric_limits<long>::min() << endl;
  cout << "Max long: " << numeric_limits<long>::max() << endl;
  cout << "Min long long: " << numeric_limits<long long>::min() << endl;
  cout << "Max long long: " << numeric_limits<long long>::max() << endl;
  cout << "Min float: " << numeric_limits<float>::min() << endl;
  cout << "Max float: " << numeric_limits<float>::max() << endl;
  cout << "Min float: " << numeric_limits<float>::min() << endl;
  cout << "Max float: " << numeric_limits<float>::max() << endl;
  cout << "Min double: " << numeric_limits<double>::min() << endl;
  cout << "Max double: " << numeric_limits<double>::max() << endl;
  cout << "Min long double: " << numeric_limits<long double>::min() << endl;
  cout << "Max long double: " << numeric_limits<long double>::max() << endl;

  // size (byte) of each numeric type
  printf("Size of bool: %lo byte(s)\n", sizeof(bool));
  printf("Size of char: %lo byte(s)\n", sizeof(char));
  printf("Size of unsigned short int: %lo byte(s)\n", sizeof(unsigned short int));
  printf("Size of short int: %lo byte(s)\n", sizeof(short int));
  printf("Size of unsigned int: %lo byte(s)\n", sizeof(unsigned int));
  printf("Size of int: %lo byte(s)\n", sizeof(int));
  printf("Size of unsigned long: %lo byte(s)\n", sizeof(unsigned long));
  printf("Size of long: %lo byte(s)\n", sizeof(long));
  printf("Size of float: %lo byte(s)\n", sizeof(float));
  printf("Size of double: %lo byte(s)\n", sizeof(double));
  printf("Size of long double: %lo byte(s)\n", sizeof(long double));

  // precision of a float: 6
  float f1 = 1.111111;
  float f2 = 1.111111;

  // precision of a double: 15
  double d1 = 1.1111111111111111;
  double d2 = 1.1111111111111111;

  printf("Sum of %f and %f = %.7f\n", f1, f2, (f1 + f2));
  printf("Sum of %f and %f = %.16f\n", d1, d2, (d1 + d2));

  // data type assigned during compilation:
  auto whatDataType1 = 10;
  auto whatDataType2 = true;

  // c -> character
  // d -> int
  // f -> float/double
  // s -> string
  printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 6.5432, "hello");

  // saving user input to variable
  string prompt1 = "Enter a number: ";
  string num1, num2;
  cout << prompt1 << endl;
  cin >> num1;
  string prompt2 = "Enter another number: ";
  cout << prompt2 << endl;
  cin >> num2;

  // convert string to int
  int iNum1 = stoi(num1);
  int iNum2 = stoi(num2);

  printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
  printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
  printf("%d * %d = %d\n", iNum1, iNum2, (iNum1 * iNum2));
  printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
  printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1 % iNum2));

  // conditional operators
  // : > < >= <= == !=

  // logical operators
  // && || !

  string prompt3 = "Enter your age: ";
  string age1;
  cout << prompt3 << endl;
  cin >> age1;

  int iage = stoi(age1);

  while (iage == 0 || !iage)
  {
    cout << "Invalid age. Please enter your age again: " << endl;
    cin >> age1;
    iage = stoi(age1);
  }

  if (iage < 18)
  {
    printf("You are %d years old. You are under age. Please leave.\n", iage);
  }
  else if (iage >= 18 && iage < 30)
  {
    printf("You are %d years old. You are a young adult. Enjoy your youth!\n", iage);
  }
  else if (iage >= 30 && iage < 50)
  {
    printf("You are %d years old. You are in your prime time!\n", iage);
  }
  else
  {
    printf("You are %d years old. Enjoy a relaxing life!\n", iage);
  }

  // ternary operators
  int age2 = 20;
  bool isAdult = age2 > 18 ? true : false;
  string sIsAdult = age2 > 18 ? "yes" : "no";
  cout << "Can I vote? " << isAdult << endl;
  cout << "Can I vote? " << sIsAdult << endl;

  // boolean: convert 1/0 to true/false
  cout.setf(ios::boolalpha);
  cout << "Can I vote? " << isAdult << endl;

  return 0;
}
