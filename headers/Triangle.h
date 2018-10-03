//
// Created by Рома on 19.09.2018.
//

#ifndef SHAPES_TRIANGLE_H
#define SHAPES_TRIANGLE_H

#include <ostream>
#include <array>
#include "Shape.h"
#include "Point.h"

class Triangle : virtual public Shape {

public:
    double get_square() const override;

    double get_perimetr() const override;

    string get_info() const override;

    const array<Point, 3> &getPoints() const;

    void setPoints(const array<Point, 3> &points);

    void move(Point point) override;

    void rotate(double angle) override;

public:
    Triangle(const array<Point, 3> &points);

private:
    std::array<Point, 3> points;
};


#endif //SHAPES_TRIANGLE_H
