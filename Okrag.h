#ifndef OKRAG_H
#define OKRAG_H

#include "Punkt_1D.h"
#include "Punkt_2D.h"

class Okrag
{
    Punkt_2D srodek;
    double promien;
public:
    Okrag();
    Okrag(Punkt_2D srodeczek,double promyczek);
};

#endif // OKRAG_H
