//
// Created by meeve on 18.09.2021.
//

#include "Polygon.h"

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

