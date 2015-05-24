#include <iostream>
#include "Punkt_1D.h"
#include <cstdlib>
using namespace std;

Punkt_1D::Punkt_1D()
{
    x = (rand()% 11) + 0;
}
Punkt_1D::Punkt_1D(int wsp)
{
    x = wsp;
}
int Punkt_1D::czytaj_x()
{
    return x;
}
