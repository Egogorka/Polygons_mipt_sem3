//
// Created by meeve on 18.09.2021.
//

#ifndef POLYGONS_MIPT_SEM3_DOT_H
#define POLYGONS_MIPT_SEM3_DOT_H


struct Dot {
    float x;
    float y;

    Dot(float x, float y);
    Dot();

    Dot& operator= (const Dot& other);

    friend float distance(Dot& a, Dot& b);
};



#endif //POLYGONS_MIPT_SEM3_DOT_H
