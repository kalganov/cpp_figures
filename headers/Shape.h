//
// Created by Рома on 19.09.2018.
//

#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H

#include <string>
#include <iostream>
#include "Point.h"

using namespace std;

class Shape {
public:
    virtual double get_square() const = 0;

    virtual double get_perimetr() const = 0;

    virtual string get_info() const = 0;

    virtual void move(Point point) = 0;

    virtual void rotate(double angle) = 0;

    friend ostream &operator<<(ostream &os, const Shape &shape) {
        return os << shape.get_info().c_str();;
    };
};


#endif //SHAPES_SHAPE_H
