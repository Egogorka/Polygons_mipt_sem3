//
// Created by meeve on 18.09.2021.
//

#include "Dot.h"
#include <cmath>

Dot::Dot(): Dot(0,0) {}
Dot::Dot(float x, float y):x(x), y(y) {}

float distance(Dot& a, Dot& b){
    return sqrtf((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

Dot &Dot::operator=(const Dot &other) = default;

