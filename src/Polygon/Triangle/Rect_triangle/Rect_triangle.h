//
// Created by Kolya on 18.09.2021.
//

#ifndef POLYGONS_MIPT_SEM3_RECT_TRIANGLE_H
#define POLYGONS_MIPT_SEM3_RECT_TRIANGLE_H

#include "Polygon/Triangle/Triangle.h"

class Rect_triangle: public Triangle{
private:
    float a, b;
public:
    Rect_triangle(Dot* in);
    Rect_triangle(Dot A, Dot B, Dot C);
    Rect_triangle(float a, float b);
};

#endif //POLYGONS_MIPT_SEM3_RECT_TRIANGLE_H
