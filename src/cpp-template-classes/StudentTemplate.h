#pragma once

template <typename T, typename U>
class Student {
   public:
    T height;
    U weight;
    static int studentNum;

    Student(T h, U w) {
        height = h, weight = w;
        studentNum++;
    }

    void GetData() {
        std::cout << "Height: " << height << std::endl;
        std::cout << "Weight: " << weight << std::endl;
    }
};

template <typename T, typename U>
int Student<T, U>::studentNum;