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

void Triangle::move(Point point) {
    for (auto shape_point : points) {
        shape_point += point;
    }
}

void Triangle::rotate(double angle) {
    Point center = (points[0] + points[1] + points[2]) / 3;

    for (auto shape_point : points) {
        shape_point =
                Point((shape_point.getX() - center.getX()) * cos(angle) -
                      (shape_point.getY() - center.getY()) * sin(angle) + center.getX(),
                      (shape_point.getX() - center.getX()) * sin(angle) +
                      (shape_point.getY() - center.getY()) * cos(angle) + center.getY()
                );
    }
}

const array<Point, 3> &Triangle::getPoints() const {
    return points;
}

void Triangle::setPoints(const array<Point, 3> &points) {
    Triangle::points = points;
}
