#include "Rectangle.h"

point* ctr(point &a,point &b){
    point c(a.getx(),b.gety()), d(b.getx(),a.gety());
    point jv[4] = {a,c,b,d};

    return jv;

}

Rectangle::Rectangle(point &a, point &b): Polygon(ctr(point &a, point &b),4)
{
}

Rectangle::~Rectangle()
{
    //dtor
}
