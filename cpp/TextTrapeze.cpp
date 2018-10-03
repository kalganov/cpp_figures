//
// Created by Рома on 20.09.2018.
//

#include "../headers/TextTrapeze.h"

TextTrapeze::TextTrapeze(const array<Point, 4> &points, const string &text) : Trapeze(points),
                                                                              Text(text, get_center()) {}

double TextTrapeze::get_square() const {
    return Trapeze::get_square();
}

double TextTrapeze::get_perimetr() const {
    return Trapeze::get_perimetr();
}

string TextTrapeze::get_info() const {
    return std::to_string(points[0].getX()) + "," + std::to_string(points[0].getY()) + "\n" +
           std::to_string(points[1].getX()) + "," + std::to_string(points[1].getY()) + "\n" +
           std::to_string(points[2].getX()) + "," + std::to_string(points[2].getY()) + "\n" +
           std::to_string(points[3].getX()) + "," + std::to_string(points[3].getY()) + "\n" +
           text;
}

void TextTrapeze::move(Point point) {
    Trapeze::move(point);
    Text::move(point);
}

void TextTrapeze::rotate(double angle) {
    Trapeze::rotate(angle);
    Text::rotate(angle);
}
