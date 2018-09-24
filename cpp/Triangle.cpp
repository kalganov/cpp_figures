//
// Created by Рома on 19.09.2018.
//

#include <cmath>
#include "../headers/Triangle.h"

double Triangle::get_square() const {
    return 0, 5 * fabs((points[0].getX() - points[2].getX()) * (points[1].getY() - points[2].getY()) -
                       (points[1].getX() - points[2].getX()) * (points[0].getY() - points[2].getY()));
}

double Triangle::get_perimetr() const {
    return length(points[0], points[1]) + length(points[0], points[2]) + length(points[1], points[2]);
}

string Triangle::get_info() const {
    return std::to_string(points[0].getX()) + "," + std::to_string(points[0].getY()) + "\n" +
           std::to_string(points[1].getX()) + "," + std::to_string(points[1].getY()) + "\n" +
           std::to_string(points[2].getX()) + "," + std::to_string(points[2].getY());
}

Triangle::Triangle(const array<Point, 3> &points) : points(points) {}
