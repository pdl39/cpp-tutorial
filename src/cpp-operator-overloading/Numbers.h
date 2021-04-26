#pragma once
#include <iostream>

// Operator Overloading: making it possible to use typical operators on user-defined types (e.g. classes)
class Numbers {
   protected:
    double num1, num2, num3;
    std::string numString;

   public:
    Numbers() {
        num1 = 1;
        num2 = 1;
        num3 = 1;
    }

    Numbers(double num1, double num2, double num3) {
        num1 = num1;
        num2 = num2;
        num3 = num3;
    }

    // Operator Overloading Methods:
    operator const char*() {
        std::ostringstream numStream;
        numStream << "Numbers: " << num1 << ", " << num2 << ", " << num3;
        numString = numStream.str();
        return numString.c_str();
    }

    Numbers& operator++() {  // unary operator
        num1++;
        num2++;
        num3++;
        return *this;
    }

    Numbers operator+(const Numbers& numbers2) {  // binary operator
        Numbers numSum;
        numSum.num1 = num1 + numbers2.num1;
        numSum.num2 = num2 + numbers2.num2;
        numSum.num3 = num3 + numbers2.num3;
        return numSum;
    }

    bool operator==(const Numbers& numbers2) {
        return ((num1 && numbers2.num1) && (num2 && numbers2.num2) && (num3 && numbers2.num3));
    }
};