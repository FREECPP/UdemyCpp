#include <iostream>

void einsbisN(int n)
{
    int array1[n];


    for(int i = 0; i != (n+1); i++)
    {
        array1[i] = i;
        std::cout<<array1[i]<<std::endl;
    }
}
