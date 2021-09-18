//
// Created by meeve on 18.09.2021.
//

#include "Triangle.h"
#include <cmath>

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

float distance(Dot& a, Dot& b){
    return sqrtf((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

float Triangle::area() {
    return Triangle::height(0)*distance(dots[1], dots[2]);
}

