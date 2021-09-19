#include "Parallelogram"

class Rhomb: public Parallelogram
{
public:
    int diag; // angle between diagonal
    Phomb(Dot* in, int size, float par_size1, float par_size1, float h,float angle_in): Parallelogram(in, size, par_size1, par_size1, h, angle){}
    void find_diag()
    {
        Area();
        diag = sqrt(2s);

    }


};
