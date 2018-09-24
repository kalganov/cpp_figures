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
    return text;
}

Text::Text(const string &text) : text(text) {}
