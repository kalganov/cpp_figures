//
// Created by Рома on 20.09.2018.
//

#ifndef SHAPES_TEXTTRAPEZE_H
#define SHAPES_TEXTTRAPEZE_H


#include "Trapeze.h"
#include "Text.h"

class TextTrapeze : public Trapeze, public Text {

public:
    TextTrapeze(const array<Point, 4> &points, const string &text);

    void move(Point point) override;

    void rotate(double angle) override;

    double get_square() const override;

    double get_perimetr() const override;

    string get_info() const override;
};

#endif //SHAPES_TEXTTRAPEZE_H

