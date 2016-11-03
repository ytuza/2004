#ifndef POLYGON_H
#define POLYGON_H
#include "PointArray.h"

class Polygon
{
    private:
        static int len;
        PointArray pts;
    public:
        Polygon(point a[],const int sz);
        Polygon(Polygon &j);
        virtual ~Polygon();
        int getNumPolygons();
        virtual int area() { return 0; }
        virtual int getNumSides() { return 0; }
        const PointArray *getPoints();
};

#endif // POLYGON_H
