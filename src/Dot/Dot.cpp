//
// Created by meeve on 18.09.2021.
//

#include "Dot.h"

Dot::Dot(): Dot(0,0) {}
Dot::Dot(float x, float y):x(x), y(y) {}

Dot &Dot::operator=(const Dot &other) = default;

