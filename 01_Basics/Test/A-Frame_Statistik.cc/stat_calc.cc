#include <iostream>

void stat_calc(float all, float bad)
{
    float* percent = new float;

    *percent = ((bad * 100.0) / all);

    if( *percent > 4.00)
    {
        std::cout<<"Die fehlerrate ist zu hoch, sie liegt bei "<<*percent<< "%"<<std::endl;
    }
    else
    {
        std::cout<<"Die fehlerrate ist in Ordnung, sie liegt bei "<<*percent<<"%"<<std::endl;
    }
    delete percent;
    percent = nullptr;


}
