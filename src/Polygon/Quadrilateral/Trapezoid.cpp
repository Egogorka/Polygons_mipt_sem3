#include "Quadrilateral.h"

class Trapezoid: public Quadrilateral
{
public:
    float h;
    float par_side1;
    float par_side2;
    float s;
    Trapezoid(Dot* in, int size, float a, float b, float c): Quadrilateral(in, size), par_side1(a),par_side2(b), h(c) {}
    void Area()
    {
        s = (par_side1 + par_side2)/2 *h

    }

};
