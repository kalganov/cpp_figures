//
// Created by Рома on 19.09.2018.
//

#ifndef SHAPES_TEXT_H
#define SHAPES_TEXT_H

#include "Shape.h"

class Text : virtual public Shape {
public:
    Text(const string &text, const Point &center);

    double get_square() const override;

    double get_perimetr() const override;

    string get_info() const override;

    const Point &getCenter() const;

    void setCenter(const Point &center);

    double getAngle() const;

    void setAngle(double angle);

    const string &getText() const;

    void setText(const string &text);

    void move(Point point) override;

    void rotate(double angle) override;

protected:
    Point center;
    double angle;
    string text;
};


#endif //SHAPES_TEXT_H
