#include "Quadrilateral.h"

class Trapezoid: public Quadrilateral
{
public:
    float h;
    float par_side1;
    float par_side2;
    float s;
    Trapezoid(Dot* in, int size, float a, float b, float c);
    void Area();


};

