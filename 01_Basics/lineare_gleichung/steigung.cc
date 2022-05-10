#include <iostream>

void steigung(char array[20])
{
    for(int i=0;i<21;i++)
    {
        if(i == 'x')
        {
            int j = i-1;
            std::cout<<array[j]<<std::endl;
        }
    }
}
