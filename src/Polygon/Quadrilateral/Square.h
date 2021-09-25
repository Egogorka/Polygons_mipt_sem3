#include "rhomb"

class Square: public Rhomb
{
private:
    int R;
    Square(Dot* in, int size, float par_size1, float par_size1, float h,float angle_in);

    void find_R();



};
