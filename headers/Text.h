//
// Created by Рома on 19.09.2018.
//

#ifndef SHAPES_TEXT_H
#define SHAPES_TEXT_H

#include "Shape.h"

class Text : virtual public Shape {
public:
    Text(const string &text);

    double get_square() const override;

    double get_perimetr() const override;

    string get_info() const override;

protected:
    string text;
};


#endif //SHAPES_TEXT_H
