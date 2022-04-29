#include "stat_calc.h"
#include <iostream>

int main()
{
    //CREATING POINTER TO HEAP
    float *complete = new float;
    float *not_good = new float;

    //INPUT FIRST VALUE
    std::cout << "Geben Sie die Gesamtmänge der gelaufenen Produkte an!";
    std::cin >> *complete;

    //DEBUG
    //May be took out the code later
    std::cout << "Pointer Address" << &complete << std::endl;
    std::cout << "Address which pointer points at: " << complete << std::endl;
    std::cout << "Pointer value" << *complete << std::endl;

    //INPUT SECOND VALUE
    std::cout << "Geben Sie die Anzahl an schlchten Produkten an!";
    std::cin >> *not_good;

    //DEBUG
    //May be took out the code later
    std::cout << "Pointer Address" << &not_good << std::endl;
    std::cout << "Address which pointer points at: " << not_good << std::endl;
    std::cout << "Pointer value" << *not_good << std::endl;

    //FUNCTION CALL STAT_CALC
    stat_calc(*complete, *not_good);

    return 0;
}
