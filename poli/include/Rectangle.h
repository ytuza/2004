#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"

class Rectangle : public Polygon {
    public:
        Rectangle(point &a, point &b);
        virtual ~Rectangle();

        int area() { return 0; }
        int getNumSides() { return 4; }

    private:
};

#endif // RECTANGLE_H
