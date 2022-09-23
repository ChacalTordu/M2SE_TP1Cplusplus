#include "point3D.h"

point3D::point3D():point2D(),z(0.0)
{
    //ctor
}

point3D::point3D(double a, double b, double c):point2D(a,b),z(c)
{
    //ctor
}

void point3D::print()
{

    
}



point3D::~point3D()
{
    //dtor
}
