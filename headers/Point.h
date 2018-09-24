//
// Created by Рома on 19.09.2018.
//

#ifndef SHAPES_POINT_H
#define SHAPES_POINT_H


class Point {

public:
    Point(double x, double y);

    Point();

    friend double length(const Point &p1, const Point &p2);

    double getX() const;

    double getY() const;

private:
    double x;
    double y;
};


#endif //SHAPES_POINT_H
