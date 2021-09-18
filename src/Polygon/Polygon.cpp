//
// Created by meeve on 18.09.2021.
//

#include "Polygon.h"

Polygon::Polygon()
: n(0), dots(nullptr) {}

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

float Polygon::perimeter() {
    float out = 0;
    for(unsigned i=1; i<n; ++i){
        out += distance(dots[i-1],dots[i]);
    }
    out += distance(dots[n-1],dots[0]);
    return out;
}


