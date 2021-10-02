#include "Trapezoid.cpp"
#include <cmath>

class Parallelogram: public Trapezoid
{
public:
    float angle;
    Parallelogram(Dot* in, int size, float par_size1, float par_size1, float h,float angle_in ): Trapezoid( in,  size,  par_size1,  par_size2,  h), angle(angle_in){}
    float diag length()
    {
        Area();
        float b = s/(par_side1*sin(angle));// find other size
        float a = par_side1;
        return sqrt(b*b + a*a - 2*a*b*cos(angle));

    }




};
