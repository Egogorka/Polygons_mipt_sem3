//
// Created by meeve on 18.09.2021.
//

#include "Triangle.h"

Triangle::Triangle():Polygon() {}
Triangle::Triangle(Dot *in): Polygon(in, 3) {}
Triangle::Triangle(Dot A, Dot B, Dot C): Polygon() {
    n = 3;
    dots = new Dot[3]();
    dots[0] = A;
    dots[1] = B;
    dots[2] = C;
}

float Triangle::height(int dot_num) {
    return 1;
}

float Triangle::area() {
    return Triangle::height(0)*distance(dots[1], dots[2]);
}

