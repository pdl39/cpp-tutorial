#pragma once

#include <cmath>

#include "ShapeStruct.h"

struct CircleStruct : ShapeStruct {
    CircleStruct(double width) {
        this->width = width;
    }

    virtual double Area() {
        return 3.14 * pow((width / 2), 2);
    }
};