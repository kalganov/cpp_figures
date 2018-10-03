//
// Created by Рома on 20.09.2018.
//

#include <cmath>
#include "../headers/Trapeze.h"

double Trapeze::get_square() const {
    double a = length(points[1], points[2]);
    double b = length(points[0], points[3]);
    double c = length(points[0], points[1]);
    double d = length(points[2], points[3]);
    return 0.5 * (a + b) * sqrt(c * c - pow(((pow((b - a), 2) + c * c - d * d) / (2 * (b - a))), 2));
}

double Trapeze::get_perimetr() const {
    return length(points[0], points[1]) + length(points[0], points[3]) + length(points[1], points[2]) +
           length(points[2], points[3]);
}

string Trapeze::get_info() const {
    return std::to_string(points[0].getX()) + "," + std::to_string(points[0].getY()) + "\n" +
           std::to_string(points[1].getX()) + "," + std::to_string(points[1].getY()) + "\n" +
           std::to_string(points[2].getX()) + "," + std::to_string(points[2].getY()) + "\n" +
           std::to_string(points[3].getX()) + "," + std::to_string(points[3].getY());
}

Trapeze::Trapeze(const array<Point, 4> &points) : points(points) {}

void Trapeze::move(Point point) {
    for (auto shape_point : points) {
        shape_point += point;
    }
}

void Trapeze::rotate(double angle) {
    Point center = get_center();

    for (auto shape_point : points) {
        shape_point =
                Point((shape_point.getX() - center.getX()) * cos(angle) -
                      (shape_point.getY() - center.getY()) * sin(angle) + center.getX(),
                      (shape_point.getX() - center.getX()) * sin(angle) +
                      (shape_point.getY() - center.getY()) * cos(angle) + center.getY()
                );
    }
}

Point Trapeze::get_center() {
    return (points[0] + points[1] + points[2] + points[3]) / 4;
}

const array<Point, 4> &Trapeze::getPoints() const {
    return points;
}

void Trapeze::setPoints(const array<Point, 4> &points) {
    Trapeze::points = points;
}
