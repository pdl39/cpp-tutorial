#pragma once

// Structs are basically the same as Classes, but with the following difference:
// Everything in Structs is by default public, while those in Classes are by default private.
// Structs can are most likely included in C++ for compatibility with C.
struct ShapeStruct {
    // By default, everything inside a struct is public.
   private:
    int id;

   public:
    double height, width;

    ShapeStruct(double h = 5, double w = 10) {
        height = h;
        width = w;
    }

    virtual double Area() {
        return height * width;
    }
};