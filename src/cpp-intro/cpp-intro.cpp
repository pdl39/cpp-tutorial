#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// global variables
int globalVar = 0;
const double PI = 3.14;

int main(int argc, char **argv) {
    // basic stdout (print)
    cout << "***** INTRO TO C++ *****" << endl;
    string name;
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Hello, " << name << "! Let's start our C++ tutorial!" << endl;
    // cout << "Hello World" << endl;

    printf("\n\n");

    // variable declaration & initialization
    bool isTrue = true;
    char myLetter = 'A';

    // min & max limits for each numeric type
    cout << "---- MIN & MAX LIMITS FOR EACH NUMERIC TYPE ----" << endl;
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

    printf("\n\n");

    // size (byte) of each numeric type
    cout << "---- SIZE (IN BYTES) OF EACH NUMERIC TYPE ----" << endl;
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

    printf("\n");

    // precision of a float: 6
    cout << "Precision of a float: 6" << endl;
    float f1 = 1.111111;
    float f2 = 1.111111;
    printf("Sum of %f and %f = %.7f\n", f1, f2, (f1 + f2));

    printf("\n");

    // precision of a double: 15
    cout << "Precision of a double: 15" << endl;
    double d1 = 1.1111111111111111;
    double d2 = 1.1111111111111111;
    printf("Sum of %f and %f = %.16f\n", d1, d2, (d1 + d2));

    printf("\n");

    // auto: Data Type Assigned During Compilation:
    auto whatDataType1 = 10;
    auto whatDataType2 = true;

    printf("\n\n");

    // c -> character
    // d -> int
    // f -> float/double
    // s -> string
    cout << "---- PRINTF DATA TYPE SHORTHAND ----" << endl;
    printf("c: %c | d: %d | 5d: %5d | .3f: %.3f | s: %s\n", 'A', 10, 5, 6.5432, "hello");

    printf("\n\n");

    // saving user input to variable
    cout << "---- CIN: SAVING USER INPUT TO A VARIABLE ----" << endl;
    string prompt1 = "Enter a number: ";
    string num1, num2;
    cout << prompt1 << endl;
    cin >> num1;
    string prompt2 = "Enter another number: ";
    cout << prompt2 << endl;
    cin >> num2;

    // Convert string to int
    int iNum1 = stoi(num1);
    int iNum2 = stoi(num2);

    printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
    printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
    printf("%d * %d = %d\n", iNum1, iNum2, (iNum1 * iNum2));
    printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
    printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1 % iNum2));
    printf("\n");
    cout << "stoi converts string to int." << endl;
    cout << "stof converts string to float." << endl;

    printf("\n\n");

    // Conditional Operators: > < >= <= == !=
    // Logical Operators: && || !
    cout << "---- OPERATORS & CONDITIONALS ----" << endl;
    string prompt3 = "Enter your age: ";
    string age1;
    cout << prompt3 << endl;
    cin >> age1;

    int iage1 = stoi(age1);

    while (iage1 == 0 || !iage1) {
        cout << "Invalid age. Please enter your age again: " << endl;
        cin >> age1;
        iage1 = stoi(age1);
    }

    if (iage1 < 18) {
        printf("You are %d years old. You are under age. Please leave.\n", iage1);
    } else if (iage1 >= 18 && iage1 < 30) {
        printf("You are %d years old. You are a young adult. Enjoy your youth!\n", iage1);
    } else if (iage1 >= 30 && iage1 < 50) {
        printf("You are %d years old. You are in your prime time!\n", iage1);
    } else {
        printf("You are %d years old. Enjoy a relaxing life!\n", iage1);
    }

    printf("\n\n");

    // Ternary Operators
    cout << "---- TERNARY OPERATORS ----" << endl;
    bool isAdult = iage1 > 18 ? true : false;
    string sIsAdult = iage1 > 18 ? "yes" : "no";
    cout << "Can I vote? " << isAdult << endl;
    cout << "Can I vote? " << sIsAdult << endl;

    printf("\n\n");

    // Boolean: Converting 1/0 to true/false
    cout << "---- BOOLEAN: CONVERTING 1/0 TO TRUE/FALSE ----" << endl;
    cout.setf(ios::boolalpha);
    cout << "Can I vote? " << isAdult << endl;

    printf("\n\n");

    // Arrays
    cout << "---- ARRAYS ----" << endl;
    int numArr[10] = {1};       // declare array with a pre-set size. Cannot post-humously change array size.
    int numArr2[] = {1, 2, 3};  // can also set array size implicitly by initializing with a set number of elements.
    int numArr3[5] = {8, 9};

    printf("Array%d index %d value: %d\n", 3, 0, numArr3[0]);
    numArr3[0] = 7;
    printf("Array%d index %d value: %d\n", 3, 0, numArr3[0]);

    // Multi-Dimensional Arrays
    int numArr4[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    cout << "numArr4[0][1][1]: " << numArr4[0][1][1] << endl;

    printf("\n\n");

    // Vectors
    cout << "---- VECTORS ----" << endl;
    vector<int> vNums(2);
    cout << "Vector Size: " << vNums.size() << endl;

    vNums[0] = 1;
    vNums[1] = 2;
    vNums.push_back(3);
    cout << "Vector Size: " << vNums.size() << endl;

    printf("\n\n");

    // While Loop
    cout << "WHILE LOOP" << endl;
    int i = 0;
    while (i < 10) {
        if (i % 2 == 0) {
            i++;
            continue;
        }
        if (i == 9)
            break;
        printf("i = %d\n", i);
        i++;
    }

    printf("\n\n");

    // Do While Loop
    cout << "---- DO WHILE LOOP ----" << endl;
    srand(time(NULL));  // time declared in <ctime>
    // srand -> a pseudo-random number generator initialized with the argument unsigned int as the 'seed'.
    // different srand initializations with the same seed value will produce the same succession of results in subsequent calls to rand.
    // to produce random-like effect, usually a distinct runtime value, like time from <ctime>, is used as seed.
    int secretNum = rand() % 11;
    int guess = 0;
    do {
        cout << "Guess the number: ";
        cin >> guess;
        if (guess > secretNum) cout << "Too Large!\n";
        if (guess < secretNum) cout << "Too Small!\n";
    } while (guess != secretNum);
    cout << "Your Guess is Right! " << guess << " is the Secret Number!" << endl;

    printf("\n\n");

    // String Stream
    cout << "---- STRING STREAM ----" << endl;
    vector<string> words;
    stringstream ss1("words for string stream");
    string word;

    while (getline(ss1, word, ' ')) {
        words.push_back(word);
    }
    cout << "words lendth: " << words.size() << endl;

    for (int i = 0; i < words.size(); i++) {
        cout << "word " << i << ": " << words[i] << endl;
    }

    int arr1[] = {1, 2, 3};
    for (auto x : arr1) cout << "x in arr1: " << x << endl;

    printf("\n\n");

    return 0;
}
