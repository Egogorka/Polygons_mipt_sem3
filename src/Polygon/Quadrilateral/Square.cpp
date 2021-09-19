#include "rhomb"

class Square: public Rhomb
{
private:
    int R;
public:
    Square(Dot* in, int size, float par_size1, float par_size1, float h,float angle_in): Rhomb(in, size, par_size1,par_size1, h, angle_in){}

    void find_R()
    {
        return R = sqrt(2) par_size1/2
    }



};
