#pragma once

// Abstract Class's purpose is just to provide a blueprint for other classes.
// You can't create an object instance of an abstract class.
class ShapeAbstract {
   public:
    virtual double Area() = 0;
};