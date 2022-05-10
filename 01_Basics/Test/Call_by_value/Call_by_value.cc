#include <iostream>
#include "function.h"

int main()
{
    int* p_number = new int;
    std::cout<<"Main:"<<p_number<<std::endl;
    std::cout<<"&Main:"<<&p_number<<std::endl;

    p_function(p_number);


    return 0;
}

