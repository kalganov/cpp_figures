//
// Created by Рома on 19.09.2018.
//

#include "../headers/Text.h"

double Text::get_square() const {
    return 0;
}

double Text::get_perimetr() const {
    return 0;
}

string Text::get_info() const {
    return text + "\n" +
           std::to_string(center.getX()) + "," + std::to_string(center.getY()) + "\n" +
           std::to_string(angle);
}

Text::Text(const string &text, const Point &center) : text(text), center(center), angle(0.0) {}

const Point &Text::getCenter() const {
    return center;
}

void Text::setCenter(const Point &center) {
    Text::center = center;
}

double Text::getAngle() const {
    return angle;
}

void Text::setAngle(double angle) {
    Text::angle = angle;
}

const string &Text::getText() const {
    return text;
}

void Text::setText(const string &text) {
    Text::text = text;
}

void Text::move(Point point) {
    center += point;
}

void Text::rotate(double angle) {
    this->angle += angle;
}
