//
// Created by meeve on 18.09.2021.
//

#ifndef POLYGONS_MIPT_SEM3_TRIANGLE_H
#define POLYGONS_MIPT_SEM3_TRIANGLE_H

#include "Polygon/Polygon.h"

class Triangle: public Polygon {
private:

public:
    Triangle(Dot* in);
    Triangle(Dot A, Dot B, Dot C);

    float height(int dot_num);
    float area();
};


#endif //POLYGONS_MIPT_SEM3_TRIANGLE_H
