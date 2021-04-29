// Pre-Processor Directives
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <limits>
#include <numeric>
#include <string>
#include <vector>
#include <iterator>
#include <memory>
#include <stdio.h>
#include <thread>
#include <mutex>
#include <chrono>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

#include "../cpp-classes/Shape.h"
#include "../cpp-classes/Circle.h"
#include "../cpp-abstract-classes/Circle2.h"
#include "../cpp-structs/ShapeStruct.h"
#include "../cpp-structs/CircleStruct.h"
#include "../cpp-operator-overloading/Numbers.h"
#include "../cpp-template-classes/StudentTemplate.h"

using namespace std;

// Macros
// There are 2 types of macros - macro constants & macro functions
#define PI 3.14                                  // macro constant
#define CIRCUMFERENCE(radius) (2 * PI * radius)  // macro function

// Global Variables
int globalVar = 0;
const double BASEUNIT = 1.00;  // constant variable (convention is to use capital letters for variable name)

// Function Prototypes
double AddNums(double num1, double num2);
void AssignName();
void ChangeScore(int* pScore);
void DoubleArr(int* arr, int size);
double DivideNums(double num1, double num2);
void ShowArea(Shape& shape);
vector<int> GenerateVecValues(int num);
double NumTimes2(double num);
double NumTimes2v2(function<double(double)> func, double num);
double NumTimes5(double num);
template <typename T>
void Add2(T num);
template <typename T>
T AddTwoNums(T num1, T num2);
template <typename T>
T WhichIsBigger(T item1, T item2);
int GetRandValue(int upperbound);
void ExecuteThread(int id);
template <typename T, size_t n>
void ShowArrItems(T const (&arr)[n]);
template <typename T>
void ShowDequeItems(deque<T> container);
template <typename T>
void ShowListItems(list<T> container);
template <typename T>
void ShowFwListItems(forward_list<T> container);
template <typename T>
void ShowSetItems(set<T> container);
template <typename T>
void ShowUnorderedSetItems(unordered_set<T> container);
template <typename T>
void ShowMultiSetItems(multiset<T> container);
template <typename T, typename U>
void ShowMapItems(map<T, U> const& container);
template <typename T, typename U>
void ShowUnorderedMapItems(unordered_map<T, U> const& container);

// ENTRY POINT //
int main(int argc, char** argv) {
    // basic stdout (print)
    cout << "***** INTRO TO C++ *****" << endl;
    string name;
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Hello, " << name << "! Let's start our C++ tutorial!" << endl;

    cout << "Press enter to go to the next topic";

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

    // Precision of a float: 6
    cout << "Precision of a float: 6" << endl;
    float f1 = 1.111111;
    float f2 = 1.111111;
    printf("Sum of %f and %f = %.7f\n", f1, f2, (f1 + f2));

    printf("\n");

    // Precision of a double: 15
    cout << "Precision of a double: 15" << endl;
    double d1 = 1.1111111111111111;
    double d2 = 1.1111111111111111;
    printf("Sum of %f and %f = %.16f\n", d1, d2, (d1 + d2));

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
    cout << "---- cin: SAVING USER INPUT TO A VARIABLE ----" << endl;
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

    // Strings
    cout << "---- STRINGS ----" << endl;
    string str1;
    cout << "Enter any word or phrase: " << endl;
    getline(cin >> ws, str1);
    cout << "Your String: " << str1 << endl;
    cout << "First character of your string: " << str1[0] << endl;
    cout << "Last character of your string: " << str1.back() << endl;
    cout << "Length of your string: " << str1.length() << endl;
    string str2 = str1;  // copy str1 to str2
    cout << "str2: " << str2 << endl;
    string str3(str2, 1);  // new string starting from index 4 of str2 assigned to str3
    cout << "str3: " << str3 << endl;
    string str4 = str1 + " + this string added!";  // append method 1
    cout << "str4: " << str4 << endl;
    string str5 = str4.append(" + this string appended!");  // append method 2
    cout << "str5: " << str5 << endl;
    string str6 = str5.erase(7, 3);  // erase -> delete {argument 2} number of characters beginning from index {arguments 1}, inclusive
    cout << "str6: " << str6 << endl;

    // find
    string stringToFind = "!";
    if (str6.find(stringToFind) != string::npos) {  // npos (n position) -> end of string
        cout << "\"" << stringToFind << "\""
             << ": Found at index: " << str6.find("!") << endl;
    }

    // substring
    cout << "Substring: " << str6.substr(6, 8) << endl;
    string sNum = to_string(1 + 2);
    cout << "This is a stringified number: " << sNum << endl;

    // character functions to check char type
    char letterZ = 'z';
    char num5 = '5';
    char whiteSpace = ' ';
    cout << "Is z a letter or a number? " << isalnum(letterZ) << endl;
    cout << "Is z a letter? " << isalpha(letterZ) << endl;
    cout << "Is 5 a number? " << isdigit(num5) << endl;
    cout << "Is whiteSpace a space? " << isspace(whiteSpace) << endl;

    printf("\n\n");

    // Math Functions
    cout << "---- MATH FUNCTIONS ----" << endl;
    // All math functions can be referenced at:
    // en.cppreference.com/w/cpp/numeric/math

    // Common Math Functions
    cout << "abs(-10) = " << abs(-10) << endl;
    cout << "max(10, 100) = " << max(10, 100) << endl;
    cout << "min(10, 100) = " << min(10, 100) << endl;
    cout << "fmax(10.1111, 100.55) = " << fmax(10.1111, 100.55) << endl;
    cout << "fmin(10.1111, 100.55) = " << fmin(10.1111, 100.55) << endl;
    cout << "ceil(11.56) = " << ceil(11.56) << endl;
    cout << "floor(11.56) = " << floor(11.56) << endl;
    cout << "round(11.56) = " << round(11.56) << endl;
    cout << "pow(2, 8) = " << pow(2, 8) << endl;
    cout << "sqrt(169) = " << sqrt(165) << endl;
    cout << "cbrt(1000) = " << cbrt(1000) << endl;

    // e^x
    int x = 1;
    cout << "e^1: exp(" << x << ") = " << exp(x) << endl;

    // 2^x
    cout << "2^1: exp2(" << x << ") = " << exp2(x) << endl;

    // log(x)
    cout << "log(20) = " << log(20) << endl;  // natural log(ln) -> e^3 ~= 20 | log(20) ~= 3
    cout << "log2(8) = " << log2(8) << endl;  // log base 2

    // Hypotenuse = sqrt(a^2 + b^2)
    cout << "hypot(2, 3) = " << hypot(2, 3) << endl;

    // sin, cos, tan, asin, acos, atan, atan2
    // sinh, cosh, tanh, asinh, acosh, atanh

    printf("\n\n");

    // Function Calls
    cout << "---- FUNCTIONS ----" << endl;
    double numd1 = 10.5;
    double numd2 = 11.77;
    printf("%f + %f = %f\n", numd1, numd2, AddNums(numd1, numd2));

    AssignName();  // doesn't do anything (assignName is of type void)

    printf("\n\n");

    // Function Calls with Pointers
    cout << "---- POINTERS ----" << endl;
    int score = 95;
    cout << "Score Before: " << score << endl;
    ChangeScore(&score); /* & (reference operator) -> the '&' preprended to the variable means "get the address of the variable".
    By using a pointer as an argument to the function, we are able to change the value of the variable
    through the void function and use it outside the function by directly accessing the address. */
    cout << "Score After: " << score << endl;

    // Pointers
    int* pScore = NULL;
    pScore = &score;
    cout << "Address of score: " << pScore << endl;
    cout << "Value of score: " << score << endl;

    int intArr[] = {1, 2, 3, 4, 5};
    int* pIntArr = intArr;  // an array is basically a pointer to the address of the first element in the array
    cout << "Address: " << pIntArr << endl;
    pIntArr++;
    cout << "Address: " << pIntArr << endl;
    int arrLen = sizeof(intArr) / sizeof(int);

    printf("\n");

    printf("Original intArr: \n");
    for (int i = 0; i < arrLen; i++) {
        cout << "intArr[" << i << "] = " << intArr[i] << endl;
    }
    printf("\n");

    DoubleArr(intArr, arrLen);

    printf("intArr after doubleArr() call: \n");
    for (int i = 0; i < arrLen; i++) {
        cout << "intArr[" << i << "] = " << intArr[i] << endl;
    }

    printf("\n\n");

    // Error Handling
    cout << "---- ERROR HANDLING ----" << endl;
    srand(time(NULL));
    double numd3 = 11, numd4 = rand() % 2;

    try {
        if (numd4 == 0)
            throw "ERROR: Division by Zero.";
        else {
            printf("%f / %f = %f\n", numd3, numd4, DivideNums(numd3, numd4));
        }
    } catch (const char* EXP) {
        cout << EXP << endl;
    }

    printf("\n\n");

    // Classes
    cout << "---- Classes ----" << endl;
    Shape square(10, 5);
    Circle circle(10);
    cout << "Area of square: " << square.Area() << endl;
    cout << "Area of cirle: " << circle.Area() << endl;
    ShowArea(square);
    ShowArea(circle);

    printf("\n\n");

    // Abstract Classes
    cout << "---- Abstract Classes ----" << endl;
    Circle2 circle2(15);
    cout << "Area of circle2: " << circle2.Area() << endl;

    printf("\n\n");

    // Structs
    cout << "---- STRUCTS ----" << endl;
    Shape squareStruct(11, 11);
    Shape rectangleStruct(3, 10);
    CircleStruct circleStruct(12);
    cout << "Area of squareStruct: " << squareStruct.Area() << endl;
    cout << "Area of rectangleStruct: " << rectangleStruct.Area() << endl;
    cout << "Area of circleStruct: " << circleStruct.Area() << endl;

    printf("\n\n");

    // Operator Overloading
    cout << "---- OPERATOR OVERLOADING ----" << endl;
    Numbers numoo1(10, 10, 10);
    ++numoo1;
    cout << "numoo1: " << numoo1 << endl;

    Numbers numoo2(7, 7, 7);
    cout << "numoo2: " << numoo2 << endl;
    cout << "numoo1 + numoo2 = " << numoo1 + numoo2 << endl;
    cout << "numoo1 == numoo2 = " << (numoo1 == numoo2) << endl;

    printf("\n\n");

    // Lambda Expressions
    cout << "---- LAMBDA EXPRESSIONS ----" << endl;
    vector<int> vecValues = GenerateVecValues(10);

    cout << "sort: values" << endl;
    sort(vecValues.begin(), vecValues.end(), [](int x, int y) { return x < y; });
    for (auto val : vecValues) cout << val << " ";

    printf("\n\n");

    vector<int> evenVecValues;

    cout << "copy_if: even values" << endl;
    copy_if(vecValues.begin(), vecValues.end(), back_inserter(evenVecValues), [](int x) { return x % 2 == 0; });
    for (auto val : evenVecValues) cout << val << " ";

    printf("\n\n");

    cout << "for_each: sum values" << endl;
    int vecSum = 0;
    for_each(vecValues.begin(), vecValues.end(), [&](int x) { vecSum += x; });
    cout << "Sum: " << vecSum << endl;

    printf("\n\n");

    // File I/O
    cout << "---- FILE I/O ----" << endl;
    ofstream writeToFileObj;
    ifstream readFromFileObj;
    string strToWrite = "";
    string strToRead = "";

    // ios_base options for ofstream open member function:
    // out -> write to file
    // app -> append to file
    // ate -> move to the end of file
    // trunc -> if file already exists, delete the contents so that new contents can be written
    // in -> read from file
    // and many more...

    writeToFileObj.open("example.txt", ios_base::out | ios_base::trunc);
    if (writeToFileObj.is_open()) {
        writeToFileObj << "--- Beginning of File ---\n";
        cout << "Enter data to write: ";
        getline(cin, strToWrite);
        writeToFileObj << strToWrite;
        writeToFileObj.close();
    }

    printf("\n");

    readFromFileObj.open("example.txt", ios_base::in);

    cout << "File Contents: " << endl;

    if (readFromFileObj.is_open()) {
        while (readFromFileObj.good()) {
            getline(readFromFileObj, strToRead);
            cout << strToRead << endl;
        }
        readFromFileObj.close();
    }

    printf("\n\n");

    // Functions as Objects
    // Refer to function definitions below for how functions are structured.
    cout << "---- FUNCTIONS AS OBJECTS ----" << endl;
    auto NumTimes2o = NumTimes2;
    cout << "10 * 2 = " << NumTimes2o(10) << endl;

    auto NumTimes2v2o = NumTimes2v2;
    cout << "100 * 2 = " << NumTimes2v2o(NumTimes2o, 100) << endl;

    vector<function<double(double)>> vecFuncs(2);
    vecFuncs[0] = NumTimes2;
    vecFuncs[1] = NumTimes5;
    cout << "11 * 2 = " << vecFuncs[0](11) << endl;
    cout << "20 * 5 = " << vecFuncs[1](20) << endl;

    printf("\n\n");

    // Macros
    // Refer to pre-processor directives section above for defined macros.
    cout << "---- MACROS ----" << endl;
    cout << "Pi: " << PI << endl;
    cout << "Circumference of a Circle of radius 7: " << CIRCUMFERENCE(7) << endl;

    printf("\n\n");

    // Template Functions
    // template functions allow using the function with different data types.
    // Refer to function definitions below for how template functions are structured.
    cout << "---- TEMPLATE FUNCTIONS ----" << endl;
    Add2(10);
    Add2(10.1567);
    cout << "AddTwoNums(10, 11) = " << AddTwoNums(10, 11) << endl;
    cout << "AddTwoNums(10.1567, 11.4532) = " << AddTwoNums(10.1567, 11.4532) << endl;
    cout << "WhichIsBigger(10, 100) = " << WhichIsBigger(10, 100) << endl;
    cout << "WhichIsBigger(10.15, 10.18) = " << WhichIsBigger(10.15, 10.18) << endl;
    cout << "WhichIsBigger('A', 'Z') = " << WhichIsBigger('A', 'Z') << endl;
    cout << "WhichIsBigger(\"small\", \"large\") = " << WhichIsBigger("small", "large") << endl;

    printf("\n\n");

    // Template Classes
    // template classes allow using the class with different data types.
    cout << "____ TEMPLATE CLASSES ----" << endl;
    Student<int, double> bob(181, 75.5);
    bob.GetData();
    cout << "Student Number: " << bob.studentNum << endl;

    printf("\n\n");

    // Iterators
    // include <iterator>
    cout << "---- ITERATORS ----" << endl;
    vector<int> numsVec = {1, 3, 5, 7, 9};
    vector<int>::iterator itr;
    cout << "numsVec = ";
    for (itr = numsVec.begin(); itr < numsVec.end(); itr++) {
        cout << *itr << " ";
    }

    printf("\n");

    vector<int>::iterator itr2 = numsVec.begin();
    cout << "itr2 = numsVec.begin()" << endl;
    advance(itr2, 2);
    cout << "*itr2 = advance(itr2, 2) = " << *itr2 << endl;
    auto itr3 = next(itr2, 1);
    auto itr4 = prev(itr2, 1);
    cout << "*itr3 = next(itr2, 1) = " << *itr3 << endl;
    cout << "*itr4 = prev(itr2, 1) = " << *itr4 << endl;

    vector<int> numsVec2 = {1, 7, 9, 11};
    vector<int> numsVec3 = {3, 5};
    cout << "numsVec2 = ";
    for (int& x : numsVec2) cout << x << " ";
    printf("\n");
    cout << "numsVec3 = ";
    for (int& x : numsVec3) cout << x << " ";
    printf("\n");
    auto itr5 = numsVec2.begin();
    advance(itr5, 1);
    copy(numsVec3.begin(), numsVec3.end(), inserter(numsVec2, itr5));
    cout << "numsVec2 = ";
    for (int& x : numsVec2) cout << x << " ";

    printf("\n");

    printf("\n\n");

    // Memory Management - #include <memory>, <stdio.h>
    // malloc & smart pointers
    // malloc
    cout << "---- MALLOC ----" << endl;
    int numValuesToStore;
    cout << "Enter how many values you want to store: ";
    cin >> numValuesToStore;
    int* pNewValues;
    pNewValues = (int*)malloc(numValuesToStore * sizeof(int));  // malloc initializtion
    if (pNewValues != NULL) {
        int i = 0;
        while (i < numValuesToStore) {
            cout << "Enter a number to store: ";
            cin >> pNewValues[i];
            i++;
        }
    }

    cout << "You stored the following numbers through malloc: " << endl;
    for (int i = 0; i < numValuesToStore; i++) {
        cout << pNewValues[i] << " ";
    }
    printf("\n");

    printf("\n\n");

    // Smart Pointers
    cout << "---- SMART POINTERS ----" << endl;
    int numValuesToStore2;
    cout << "Enter how many values you want to store: ";
    cin >> numValuesToStore2;
    unique_ptr<int[]> pNewValues2(new int[numValuesToStore2]);  // smart pointer initialization
    if (pNewValues2 != NULL) {
        int i = 0;
        while (i < numValuesToStore2) {
            cout << "Enter a number to store: ";
            cin >> pNewValues2[i];
            i++;
        }
    }

    cout << "You stored the following numbers through smart pointer: " << endl;
    for (int i = 0; i < numValuesToStore2; i++) {
        cout << pNewValues2[i] << " ";
    }
    printf("\n");

    printf("\n\n");

    // Threads
    // #include <thread>, <chrono>, <mutex>
    cout << "---- THREADS ----" << endl;
    thread thr1(ExecuteThread, 1);
    thr1.join();  // join the thr1 thread to our main thread

    thread thr2(ExecuteThread, 2);
    thr2.join();

    printf("\n\n");

    // Sequence Containers - #include <deque>, <list>, <forward_list>
    // deque, list, forward_list
    // deque -> Double-Ended Queues
    cout << "---- DEQUE ----" << endl;
    deque<int> numsDeq = {1, 3, 5, 7, 9};
    cout << "numsDeq: " << endl;
    ShowDequeItems(numsDeq);

    cout << "numsDeq.push_front(0): " << endl;
    numsDeq.push_front(0);
    ShowDequeItems(numsDeq);

    cout << "numsDeq.push_back(11): " << endl;
    numsDeq.push_back(11);
    ShowDequeItems(numsDeq);

    cout << "numsDeq.size() = " << numsDeq.size() << endl;

    numsDeq.assign({2, 4, 6});  // assign replaces the existing deque with the provided input.
    cout << "numsDeq.assign({2, 4, 6}): " << endl;
    ShowDequeItems(numsDeq);

    cout << "numsDeq.size() = " << numsDeq.size() << endl;

    cout << "numsDeq[0] = " << numsDeq[0] << endl;
    cout << "numsDeq.at(1) = " << numsDeq.at(1) << endl;

    deque<int>::iterator deqItr = numsDeq.begin() + 1;
    cout << "deqItr = numsDeq.begin() + 1" << endl;
    numsDeq.insert(deqItr, 3);
    cout << "numsDeq.insert(deqItr, 3): " << endl;
    ShowDequeItems(numsDeq);

    int tempArr1[3] = {7, 8, 9};
    cout << "tempArr1 = ";
    ShowArrItems(tempArr1);

    numsDeq.insert(numsDeq.end(), tempArr1, tempArr1 + 2);
    cout << "numsDeq.insert(numsDeq.end(), tempArr1, tempArr1 + 2): " << endl;
    ShowDequeItems(numsDeq);

    numsDeq.erase(numsDeq.end());
    cout << "numsDeq.erase(numsDeq.end()): " << endl;
    ShowDequeItems(numsDeq);

    numsDeq.pop_front();
    cout << "numsDeq.pop_front(): " << endl;
    ShowDequeItems(numsDeq);

    numsDeq.pop_back();
    cout << "numsDeq.pop_back(): " << endl;
    ShowDequeItems(numsDeq);

    deque<int> numsDeq2 = {11, 13, 15};
    cout << "numsDeq = ";
    ShowDequeItems(numsDeq);
    cout << "numsDeq2 = ";
    ShowDequeItems(numsDeq2);

    numsDeq.swap(numsDeq2);
    cout << "numsDeq.swap(numsDeq2): " << endl;
    cout << "numsDeq = ";
    ShowDequeItems(numsDeq);
    cout << "numsDeq2 = ";
    ShowDequeItems(numsDeq2);

    printf("\n\n");

    // list
    // this is doubly-linked list
    // fast random access not supported.
    cout << "---- LIST ----" << endl;
    int numArr5[5] = {1, 2, 3, 4, 5};
    cout << "numArr5 = ";
    ShowArrItems(numArr5);
    list<int> list1;
    list1.insert(list1.begin(), numArr5, numArr5 + 5);
    cout << "list1.insert(list1.begin(), numArr5, numArr5 + 5): " << endl;
    ShowListItems(list1);

    list1.assign({11, 12, 13});
    cout << "list1.assign({11, 12, 13}): " << endl;
    ShowListItems(list1);

    list1.push_front(10);
    cout << "list1.push_front(10): " << endl;
    ShowListItems(list1);

    list1.push_back(18);
    cout << "list1.push_back(16): " << endl;
    ShowListItems(list1);

    // for list, you can't access item by index: e.g. list1[0] -> results in error.
    // but you can access item through iterator.

    list<int>::iterator listItr1 = list1.begin();
    advance(listItr1, 2);
    cout << "listItr1 = list1.begin()" << endl;
    cout << "advance(listItr1, 2)" << endl;
    cout << "*listItr1 = " << *listItr1 << endl;

    list<int>::iterator listItr2 = list1.begin();
    advance(listItr2, 4);
    cout << "listItr2 = list2.begin()" << endl;
    cout << "advance(listItr2, 3)" << endl;
    cout << "*listItr2 = " << *listItr2 << endl;
    list1.insert(listItr2, {14, 15, 16, 17});
    cout << "list1.insert(listIr2, {14, 15, 16, 17}): " << endl;
    ShowListItems(list1);

    list1.erase(list1.begin());
    cout << "list1.erase(list1.begin()): " << endl;
    ShowListItems(list1);

    list<int>::iterator listItr3 = list1.begin();
    advance(listItr3, 3);
    cout << "listItr3 = list1.begin()" << endl;
    cout << "advance(listItr3, 3)" << endl;
    cout << "*listItr3 = " << *listItr3 << endl;
    cout << "*listItr2 = " << *listItr2 << endl;
    cout << "*listItr1 = " << *listItr1 << endl;

    list1.erase(listItr1);
    cout << "list1.erase(listItr1): " << endl;
    ShowListItems(list1);
    list1.erase(listItr3);
    cout << "list1.erase(listItr3): " << endl;
    ShowListItems(list1);

    listItr1 = list1.begin();
    advance(listItr1, 2);
    cout << "listItr1 = list1.begin()" << endl;
    cout << "advance(listItr1, 2)" << endl;
    cout << "*listItr1 = " << *listItr1 << endl;
    cout << "*listItr2 = " << *listItr2 << endl;
    list1.erase(listItr1, listItr2);
    cout << "list1.erase(listItr1, listItr2): " << endl;
    ShowListItems(list1);

    list1.pop_front();
    cout << "list1.pop_front(): " << endl;
    ShowListItems(list1);

    list1.pop_back();
    cout << "list1.pop_back(): " << endl;
    ShowListItems(list1);

    list<int> list2 = {11, 13, 15};
    cout << "list = ";
    ShowListItems(list1);
    cout << "list2 = ";
    ShowListItems(list2);

    list1.swap(list2);
    cout << "list1.swap(list2): " << endl;
    cout << "list1 = ";
    ShowListItems(list1);
    cout << "list2 = ";
    ShowListItems(list2);

    list1.push_front(18);
    cout << "list1.push_front(18): " << endl;
    ShowListItems(list1);

    list1.reverse();  // reverse isn't sorting in reverse (decreasing) order. it is reversing the order the elements appear in the list.
    cout << "list1.reverse(): " << endl;
    ShowListItems(list1);

    list1.push_front(11);
    cout << "list1.push_front(11): " << endl;
    ShowListItems(list1);

    list1.push_back(15);
    cout << "list1.push_back(15): " << endl;
    ShowListItems(list1);

    list2.push_back(18);
    cout << "list2.push_back(18): " << endl;
    ShowListItems(list2);

    list2.push_front(18);
    cout << "list2.push_front(18): " << endl;
    ShowListItems(list2);

    list1.sort();
    cout << "list1.sort(): " << endl;
    ShowListItems(list1);

    list2.sort();
    cout << "list2.sort(): " << endl;
    ShowListItems(list2);

    list1.merge(list2);  // result is sorted if the two lists are sorted.
    cout << "list1.merge(list2): " << endl;
    ShowListItems(list1);

    list1.unique();  // remove duplicates **only works 100% for sorted list -> it removes an element only if it compares equal to the elment immediately preceding it.
    cout << "list1.unique(): " << endl;
    ShowListItems(list1);

    printf("\n\n");

    // forward_list
    // this is singly-linked list
    // fast random access not supported.
    cout << "---- FORWARD_LIST ----" << endl;
    forward_list<int> fwList1;

    fwList1.assign({1, 2, 3, 4, 5});
    cout << "fwList1.assign({1, 2, 3, 4, 5}): " << endl;
    ShowFwListItems(fwList1);

    fwList1.push_front(0);
    cout << "fwList1.push_front(0): " << endl;
    ShowFwListItems(fwList1);

    fwList1.pop_front();
    cout << "fwList1.pop_front(): " << endl;
    ShowFwListItems(fwList1);

    fwList1.emplace_front(0);
    cout << "fwList1.emplace_front(0): " << endl;
    ShowFwListItems(fwList1);

    cout << "fwList1.front() = " << fwList1.front() << endl;

    forward_list<int>::iterator fwListItr1 = fwList1.begin();
    advance(fwListItr1, 4);
    cout << "fwListItr1 = fwList1.begin()" << endl;
    cout << "advance(fwListItr1, 4)" << endl;
    cout << "*fwListItr1 = " << *fwListItr1 << endl;

    fwList1.insert_after(fwListItr1, {7, 8, 9});
    cout << "fwList1.insert_after(fwListItr1, {7, 8, 9}): " << endl;
    ShowFwListItems(fwList1);

    cout << "*fwListItr1 = " << *fwListItr1 << endl;
    fwListItr1++;
    cout << "fwListItr1++" << endl;
    cout << "*fwListItr1 = " << *fwListItr1 << endl;

    forward_list<int>::iterator fwListItr2 = fwList1.begin();
    fwList1.emplace_after(fwListItr2, 1);
    cout << "fwListItr2 = fwList1.begin()" << endl;
    cout << "*fwListItr2 = " << *fwListItr2 << endl;
    cout << "fwList1.emplace_after(fwListItr2, 1): " << endl;
    ShowFwListItems(fwList1);

    advance(fwListItr2, 5);
    cout << "advance(fwListItr2, 5)" << endl;
    cout << "*fwListItr2 = " << *fwListItr2 << endl;

    fwList1.emplace_after(fwListItr2, 22);
    cout << "fwList1.emplace_after(fwListItr2, 22): " << endl;
    ShowFwListItems(fwList1);

    fwList1.erase_after(fwListItr2);
    cout << "fwList1.erase_after(fwListItr2): " << endl;
    ShowFwListItems(fwList1);

    fwList1.remove(4);
    cout << "fwList1.remove(4): " << endl;
    ShowFwListItems(fwList1);
    fwList1.remove(7);
    cout << "fwList1.remove(7): " << endl;
    ShowFwListItems(fwList1);

    forward_list<int> fwList2 = {1, 3, 5, 7, 9};
    cout << "fwList1 = ";
    ShowFwListItems(fwList1);
    cout << "fwList2 = ";
    ShowFwListItems(fwList2);

    fwList1.swap(fwList2);
    cout << "fwList1.swap(fwList2): " << endl;
    cout << "fwList1 = ";
    ShowFwListItems(fwList1);
    cout << "fwList2 = ";
    ShowFwListItems(fwList2);

    fwList1.push_front(1);
    cout << "fwList1.push_front(1): " << endl;
    ShowFwListItems(fwList1);

    fwList1.push_front(2);
    cout << "fwList1.push_front(2): " << endl;
    ShowFwListItems(fwList1);

    fwList1.push_front(1);
    cout << "fwList1.push_front(1): " << endl;
    ShowFwListItems(fwList1);

    fwList1.unique();  // remove duplicates **only works 100% for sorted forward list -> it removes an element only if it compares equal to the elment immediately preceding it.
    cout << "fwList1.unique(): " << endl;
    ShowFwListItems(fwList1);

    fwList1.reverse();  // reverse isn't sorting in reverse (decreasing) order. it is reversing the order the elements appear in the forwrd list.
    cout << "fwList1.reverse(): " << endl;
    ShowFwListItems(fwList1);

    fwList1.unique();  // still doens't work because the foward list is not sorted.
    cout << "fwList1.unique(): " << endl;
    ShowFwListItems(fwList1);

    fwList1.sort();
    cout << "fwList1.sort(): " << endl;
    ShowFwListItems(fwList1);

    fwList2.sort();
    cout << "fwList2.sort(): " << endl;
    ShowFwListItems(fwList2);

    fwList1.merge(fwList2);  // result is sorted if the two forward lists are sorted.
    cout << "fwList1.merge(fwList2): " << endl;
    ShowFwListItems(fwList1);

    fwList1.unique();  // now works 100%, after sorting.
    cout << "fwList1.unique(): " << endl;
    ShowFwListItems(fwList1);

    printf("\n\n");

    // Associative Containers -> store data in pre-defined order, allowing for fast search.
    // set, multi-set, map
    // Sets -> #include <set>
    // unordered_set incorporates hash function to weakly order the sequence.
    // unordered_set requires separate #include <unordered_set>
    cout << "---- SETS ----" << endl;
    set<int> set1{10, 10, 8, 8, 6, 6, 1, 4, 1, 3, 3, 5, 7, 2, 3};

    cout << "set1: " << endl;
    ShowSetItems(set1);
    cout << "set1.size() = " << set1.size() << endl;

    set1.insert(11);
    cout << "set1.insert(11): " << endl;
    ShowSetItems(set1);

    set1.erase(4);
    cout << "set1.erase(4): " << endl;
    ShowSetItems(set1);

    set<int>::iterator setItr1 = set1.begin();
    setItr1++;
    cout << "setItr1 = set1.begin()" << endl;
    cout << "setItr1++" << endl;
    cout << "*setItr1 = " << *setItr1 << endl;

    set<int>::iterator setItr2 = set1.end();
    cout << "setItr2 = set1.end()" << endl;
    cout << "*setItr2 = " << *setItr2 << endl;
    advance(setItr2, -1);
    cout << "advance(setItr2, -1)" << endl;
    cout << "*setItr2 = " << *setItr2 << endl;
    advance(setItr2, -2);
    cout << "advance(setItr2, -2)" << endl;
    cout << "*setItr2 = " << *setItr2 << endl;

    set<int>::iterator setItr3 = set1.find(5);
    cout << "setItr3 = set1.find(5)" << endl;
    cout << "*setItr3 = " << *setItr3 << endl;

    set1.erase(setItr3, setItr2);
    cout << "set1.erase(setItr3, setItr2): " << endl;
    ShowSetItems(set1);

    int numArr6[] = {2, 4, 6, 8};
    cout << "numArr6 = ";
    ShowArrItems(numArr6);
    set<int> set2;
    set2.insert(numArr6, numArr6 + 3);
    cout << "set2.insert(numArr6, numArr6 + 3): " << endl;
    ShowSetItems(set2);

    set<int>::iterator setItr4 = set1.lower_bound(2);
    cout << "setItr4 = set1.lower_bound(2)" << endl;
    cout << "*setItr4 = " << *setItr4 << endl;
    set<int>::iterator setItr5 = set1.upper_bound(2);
    cout << "setItr5 = set1.upper_bound(2)" << endl;
    cout << "*setItr5 = " << *setItr5 << endl;

    cout << "set1 = ";
    ShowSetItems(set1);
    cout << "set2 = ";
    ShowSetItems(set2);

    set1.swap(set2);
    cout << "set1.swap(set2): " << endl;
    cout << "set1 = ";
    ShowSetItems(set1);
    cout << "set2 = ";
    ShowSetItems(set2);

    // unordered_set
    unordered_set<int> uset1 = {3, 3, 1, 1, 5, 2, 4, 6, 7, 7, 9, 8, 9};
    cout << "unordered_set" << endl;
    cout << "uset1: " << endl;
    ShowUnorderedSetItems(uset1);

    printf("\n\n");

    // Multisets -> included in <set>
    // basically same as set, but allows duplicates
    cout << "---- MULTISETS ----" << endl;
    multiset<int> mset1{10, 10, 8, 8, 6, 6, 1, 4, 1, 3, 3, 5, 7, 2, 3};
    cout << "mset1: " << endl;
    ShowMultiSetItems(mset1);

    printf("\n\n");

    // Maps -> #include <map>
    // key-value pairs
    // map sorts the items by key. unordered_map incorporates hash function to weakly order the sequence.
    // unordered_map requires separate #include <unordered_map>.
    cout << "---- MAPS ----" << endl;
    map<int, string> map1;
    map1.insert(pair<int, string>(0, "zero"));
    map1.insert(pair<int, string>(1, "one"));
    map1.insert(pair<int, string>(2, "two"));
    map1.insert(pair<int, string>(3, "three"));
    map1.insert(pair<int, string>(4, "four"));
    map1.insert(pair<int, string>(5, "five"));

    cout << "map" << endl;
    cout << "map1 = ";
    ShowMapItems(map1);

    map<string, string> map2 = {
        {"A+", "100"},
        {"A", "90~99"},
        {"B", "80~89"},
        {"C", "70~79"},
        {"D", "60~69"},
        {"F", "~59"}};

    cout << "map" << endl;
    cout << "map2 = ";
    ShowMapItems(map2);

    unordered_map<string, string> map3 = {
        {"A+", "100"},
        {"A", "90~99"},
        {"B", "80~89"},
        {"C", "70~79"},
        {"D", "60~69"},
        {"F", "~59"}};

    cout << "unordered_map" << endl;
    cout << "map3 = ";
    ShowUnorderedMapItems(map3);

    // in C++, key => "first" and value => "second".

    cout << "map1 key 2 = map1.find(2)->first = " << map1.find(2)->first << endl;
    cout << "map1 key 3 = map1.find(3)->first = " << map1.find(3)->first << endl;
    cout << "map1 key 5 = map1.find(5)->first = " << map1.find(5)->first << endl;

    auto match2 = map1.find(2);
    cout << "map1[2] = map1.find(2)->second = " << map1.find(2)->second << endl;
    auto match3 = map1.find(3);
    cout << "map1[3] = map1.find(3)->second = " << match3->second << endl;
    auto match5 = map1.find(5);
    cout << "map1[5] = map1.find(5)->second = " << match5->second << endl;

    cout << "map1.lower_bound(2)->first = " << map1.lower_bound(2)->first << endl;
    cout << "map1.upper_bound(2)->first = " << map1.upper_bound(2)->first << endl;
    cout << "map1.lower_bound(2)->second = " << map1.lower_bound(2)->second << endl;
    cout << "map1.upper_bound(2)->second = " << map1.upper_bound(2)->second << endl;

    return 0;
}

// Functions
double AddNums(double num1 = 0, double num2 = 0) {
    return num1 + num2;
}

void AssignName() {
    string name = "Bob";
}

void ChangeScore(int* pScore) {  // * -> the '*' appended to the variable type (int) means "the variable is a pointer to the address that contains its value, which is an int".
    *pScore = 100;
}

void DoubleArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}

double DivideNums(double num1, double num2) {
    return num1 / num2;
}

void ShowArea(Shape& shape) {
    cout << "Area: " << shape.Area() << endl;
}

vector<int> GenerateVecValues(int num) {
    vector<int> vectorValues;
    srand(time(NULL));
    int i = 0;
    int randValue = 0;

    while (i < num) {
        randValue = rand() % 100;
        vectorValues.push_back(randValue);
        i++;
    }
    return vectorValues;
}

// Functions as Objects
double NumTimes2(double num) {
    return num * 2;
}

double NumTimes2v2(function<double(double)> func, double num) {
    return func(num);
}

double NumTimes5(double num) {
    return num * 5;
}
//

// Template Functions
template <typename T>
void Add2(T num) {
    cout << "Add2(" << num << ") = " << num + 2 << endl;
}

template <typename T>
T AddTwoNums(T num1, T num2) {
    return num1 + num2;
}

template <typename T>
T WhichIsBigger(T item1, T item2) {
    return item1 > item2 ? item1 : item2;
}
//

// Threads
int GetRandValue(int upperbound) {
    srand(time(NULL));
    return rand() % upperbound;
}

void ExecuteThread(int id) {
    // Time Functions
    auto currentTime = chrono::system_clock::now();
    time_t sleepTime = chrono::system_clock::to_time_t(currentTime);
    tm myLocalTime = *localtime(&sleepTime);
    cout << "Thread: " << id << endl;
    cout << "Sleep Time: " << ctime(&sleepTime) << endl;
    cout << "Year: " << myLocalTime.tm_year + 1900 << endl;
    cout << "Month: " << myLocalTime.tm_mon + 1 << endl;
    cout << "Day: " << myLocalTime.tm_mday << endl;
    cout << "Hours: " << myLocalTime.tm_hour << endl;
    cout << "Minutes: " << myLocalTime.tm_min << endl;
    cout << "Seconds: " << myLocalTime.tm_sec << endl;

    printf("\n");

    // put thread to sleep (for up to 3 seconds)
    this_thread::sleep_for(chrono::seconds(GetRandValue(3)));
    currentTime = chrono::system_clock::now();
    time_t awakeTime = chrono::system_clock::to_time_t(currentTime);
    cout << "Thread: " << id << endl;
    cout << "Awake Time: " << ctime(&awakeTime) << endl;
}
//

template <typename T, size_t n>
void ShowArrItems(T const (&arr)[n]) {
    for (size_t i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    printf("\n");
}

template <typename T>
void ShowDequeItems(deque<T> container) {
    for (T x : container) cout << x << " ";
    printf("\n");
}

template <typename T>
void ShowListItems(list<T> container) {
    for (T x : container) cout << x << " ";
    printf("\n");
}

template <typename T>
void ShowFwListItems(forward_list<T> container) {
    for (T x : container) cout << x << " ";
    printf("\n");
};

template <typename T>
void ShowSetItems(set<T> container) {
    for (T x : container) cout << x << " ";
    printf("\n");
};

template <typename T>
void ShowUnorderedSetItems(unordered_set<T> container) {
    for (T x : container) cout << x << " ";
    printf("\n");
};

template <typename T>
void ShowMultiSetItems(multiset<T> container) {
    for (T x : container) cout << x << " ";
    printf("\n");
};

template <typename T, typename U>
void ShowMapItems(map<T, U> const& container) {
    cout << "{" << endl;
    for (auto const& pair : container) {
        cout << "  " << pair.first << " : " << pair.second << "," << endl;
    }
    cout << "}" << endl;
};

template <typename T, typename U>
void ShowUnorderedMapItems(unordered_map<T, U> const& container) {
    cout << "{" << endl;
    for (auto const& pair : container) {
        cout << "  " << pair.first << " : " << pair.second << "," << endl;
    }
    cout << "}" << endl;
};
