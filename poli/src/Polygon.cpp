#include "Polygon.h"
int Polygon::len = 0;
Polygon::Polygon(point a[],const int sz):pts(a,sz)
{
    len++;
}

Polygon::Polygon(Polygon &j) {
        pts = j.pts;
        len++;
}

int Polygon::getNumPolygons()
{
    return len;
}

const PointArray *Polygon::getPoints()
{
    return &pts;
}

Polygon::~Polygon()
{

}
