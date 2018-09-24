#include <iostream>
#include <vector>
#include "headers/Shape.h"
#include "headers/Text.h"
#include "headers/Triangle.h"
#include "headers/Trapeze.h"
#include "headers/TextTrapeze.h"
#include "headers/ListedStack.h"

using namespace std;

int main() {

    vector<Shape *> shapes;

    string simple_text = "simple_string";

    array<Point, 3> triangle_points;
    triangle_points[0] = Point(0.0, 0.0);
    triangle_points[1] = Point(5.0, 0.0);
    triangle_points[2] = Point(5.0, 5.0);

    array<Point, 4> trapeze_points;
    trapeze_points[0] = Point(0.0, 0.0);
    trapeze_points[1] = Point(5.0, 5.0);
    trapeze_points[2] = Point(10.0, 5.0);
    trapeze_points[3] = Point(15.0, 0.0);

    Shape *text = new Text(simple_text);
    Shape *triangle = new Triangle(triangle_points);
    Shape *trapeze = new Trapeze(trapeze_points);
    Shape *textTrapeze = new TextTrapeze(trapeze_points, simple_text);

    shapes.push_back(text);
    shapes.push_back(triangle);
    shapes.push_back(trapeze);
    shapes.push_back(textTrapeze);

    ListedStack<Shape *> listedStack;

    for (Shape *shape : shapes) {
        cout << *shape << endl << endl;
        listedStack.push(shape);
    }

    auto poped_shape = listedStack.pop();

    if (shapes.back() != poped_shape) {
        throw new string;
    }

    size_t size = 0;
    for (auto shape : listedStack) {
        cout << *shape << endl;
        ++size;
    }

    if (size != shapes.size() - 1) {
        throw new string;
    }

    return 0;
}