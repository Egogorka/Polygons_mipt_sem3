//
// Created by meeve on 18.09.2021.
//

#ifndef POLYGONS_MIPT_SEM3_POLYGON_H
#define POLYGONS_MIPT_SEM3_POLYGON_H

#include "Dot/Dot.h"

class Polygon {
protected:
    int n;
    Dot* dots;

public:
    Polygon();

    Polygon(Dot* in, int size);
    ~Polygon();

    float perimeter();
};


#endif //POLYGONS_MIPT_SEM3_POLYGON_H
