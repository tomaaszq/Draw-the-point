#include <iostream>

#include "Okrag.h"

#include "Punkt_1D.h"

#include "Punkt_2D.h"

#include <cstdlib>

using namespace std;


int main()

{

    srand( time( NULL ) );

    Okrag O;

    int tmp1,tmp2;

    char pytanie;



cout << "Współrzędne punktu X mogą zostać wylosowane, lub możesz je podać. Czy chcesz je podać?(t-tak, n-nie): ";

cin >> pytanie;

if (pytanie=='t')

{

    cout << "Podaj współrzędną x w zakresie 0-10 :" ;

    cin >> tmp1;

    cout << "Podaj współrzędną y w zakresie 0-10 :" ;

    cin >> tmp2;

    Punkt_2D P(tmp1,tmp2);

    P.wyswietl_punkt();

}

else

{

    Punkt_2D P;

    P.wyswietl_punkt();

}




return 0;

}


