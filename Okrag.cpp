#include <iostream>
#include "Okrag.h"
#include <cstdlib>
using namespace std;

Okrag::Okrag()
{
   promien = (rand()% 11) + 0;
}
Okrag::Okrag(Punkt_2D srodeczek, double promyczek)
{
    srodek = srodeczek;
    promien = promyczek;
}
