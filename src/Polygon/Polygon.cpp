//
// Created by meeve on 18.09.2021.
//

#include "Polygon.h"
#include <cmath>

Polygon::Polygon(Dot *in, int size)
:n(size), dots(nullptr) {
    dots = new Dot[size]();
    for(unsigned i=0; i<n; ++i){
        dots[i] = in[i];
    }
}

Polygon::~Polygon() {
    delete [] dots;
}

float distance(Dot& a, Dot& b){
    return sqrtf((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y) );
}

float Polygon::perimeter() {
    float out = 0;
    for(unsigned i=1; i<n; ++i){
        out += distance(dots[i-1],dots[i]);
    }
    return out;
}


