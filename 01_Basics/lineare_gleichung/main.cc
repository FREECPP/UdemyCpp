//Das Program soll eine lineare Gleichung einlesen können und folgende Werte ausgeben:
//-Die Steigung der Geraden
//-Den Schnittpunkt mit der y-Achse
//-Den Schnittpunkt mit der x-Achse

#include <iostream>
#include "steigung.h"

int main()
{
    std::cout<<"Geben Sie eine lineare Funktion ein:";
    char eingabe[20];
    std::cin>>eingabe;

    steigung(eingabe);




    return 0;

}
