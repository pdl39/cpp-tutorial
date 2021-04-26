#pragma once // makes sure the Shape.h file is copied only once for the entire build.
// basically the same function as #ifndef #define #endif sequence, but more new and preferred.

class Shape {
    // By default, everything inside a class is private.
   private:    // accessible only within this class
   protected:  // accessible within this class and within inherited sub-classes
    double height;
    double width;

   public:                   // accessible by anything that can access this class
    static int numOfShapes;  // static -> will be the same value for all instances of this class
    // Constructors: called everytime an object instance is created.

    Shape();
    Shape(double length) {
        this->height = length;  // -> : pointer operator. Used access an object's fields and methods
        this->width = length;
    }
    Shape(double height, double width) {
        this->height = height;
        this->width = width;
    }

    // Deconstructor: called everytime an object instance is deleted.
    virtual ~Shape() = default;

    // Setters: can be used to protect data -> prevent user from directly changing data values.
    void SetHeight(double height) {
        this->height = height;
    }
    void SetWidth(double width) {
        this->width = width;
    }

    // Getters: can be used to store different values
    double GetHeight() {
        return height;
    }
    double GetWidth() {
        return width;
    }
    static int GetNumOfShapes() {
        return numOfShapes;
    }

    virtual double Area() {  // virtual -> will be unique to each object instance (vs. static)
        return height * width;
    }
};