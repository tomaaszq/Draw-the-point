#ifndef PUNKT_1D_H
#define PUNKT_1D_H
#include <iostream>
using namespace std;
class Punkt_1D
{
    int x;
public:
    Punkt_1D();
    Punkt_1D(int wsp);
    int czytaj_x ();
};
#endif // PUNKT_1D_H
