//
// Created by meeve on 18.09.2021.
//

#include "Segment.h"

Segment::Segment(Dot *in)
: Polygon(in, 2) {}

Segment::Segment(Dot &A, Dot &B)
: Polygon(){
    dots = new Dot[2]; n = 2;
    dots[0] = A; dots[1] = B;
}
