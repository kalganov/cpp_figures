//
// Created by Рома on 19.09.2018.
//

#include <cmath>
#include "../headers/Point.h"

double length(const Point &p1, const Point &p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point() : x(0), y(0) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}
