#ifndef CIRCLE_H
#define CIRCLE_H
#include <cmath>
#include "Shape.h"

class Circle : public Shape {
   public:
    Circle();
    Circle(const Circle& orig);
    Circle(double width) : Shape(width) {}
    virtual ~Circle() = default;
    virtual double Area() {
        return 3.14 * pow((width / 2), 2);
    }
};

#endif