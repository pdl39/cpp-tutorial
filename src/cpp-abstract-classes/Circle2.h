#pragma once

#include <cmath>

#include "ShapeAbstract.h"

// Circle2 inherits the abstract class "ShapeAbstract"
class Circle2 : public ShapeAbstract {
   protected:
    double width;

   public:
    Circle2(double w) {
        width = w;
    }

    double Area() override {
        return 3.14 * pow((width / 2), 2);
    }
};