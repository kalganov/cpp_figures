//
// Created by Рома on 20.09.2018.
//

#ifndef SHAPES_TRAPEZE_H
#define SHAPES_TRAPEZE_H


#include <array>
#include "Shape.h"
#include "Point.h"

class Trapeze : virtual public Shape {
public:
    double get_square() const override;

    double get_perimetr() const override;

    string get_info() const override;

    Trapeze(const array<Point, 4> &points);

protected:
    array<Point, 4> points;
};


#endif //SHAPES_TRAPEZE_H
