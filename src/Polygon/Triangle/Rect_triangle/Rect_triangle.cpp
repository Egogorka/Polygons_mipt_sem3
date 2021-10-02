//
// Created by Kolya on 18.09.2021.
//

#include "Rect_triangle.h"

Rect_triangle::Rect_triangle(Dot *in): Triangle(in){}
Rect_triangle::Rect_triangle(Dot A, Dot B, Dot C): Triangle(A, B, C){}
Rect_triangle::Rect_triangle(float a, float b): Triangle() {
    n = 3;
    dots = new Dot[n]();
    dots[0] = Dot(0, a);
    dots[1] = Dot();
    dots[2] = Dot(b, 0);
}