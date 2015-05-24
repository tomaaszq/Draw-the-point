#include <iostream>
#include "Punkt_2D.h"
using namespace std;
#include <cstdlib>
Punkt_2D::Punkt_2D()
{
    y = (rand()% 11) + 0;
}
Punkt_2D::Punkt_2D(int wspX,int wspY) :Punkt_1D(wspX)
{
    y = wspY;
}
int Punkt_2D::czytaj_y()
{
    return y;
}
void Punkt_2D::wyswietl_punkt()
{
    cout << "  ^" << endl;
    for (int i=0;i<11;i++)
    {
        if (i!=0)
        {
            cout << " ";
        }
        cout << 10-i << "|";
        if (10-i==y)
        {
            for (int k=0;k<czytaj_x();k++)
            {
                cout << " ";
            }
            cout << "X(" << czytaj_x() << "," << y << ")";
        }
        cout << endl;
    }
    cout << "   ----------->" << endl;
    cout << "   012345678910" << endl;
}
