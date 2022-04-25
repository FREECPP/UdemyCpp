#include <iostream>

int main()
{
    float vector1[3]={};
    float vector2[3]={};
    float vector3[3]={};

std::cout<<"Geben Sie die Zahlen des ersten Vectors ein:"<<std::endl;

    for(unsigned int i = 0; i<3;i++)
    {
        std::cin>>vector1[i];
    }

std::cout<<"Geben Sie die Zahlen des zweiten Vectors ein:"<<std::endl;

    for(unsigned int i = 0; i<3;i++)
    {
        std::cin>>vector2[i];
    }

std::cout<<"Ergebnis der Addition:"<<std::endl;
    for(unsigned int i=0; i<3;i++)
    {
        vector3[i]= vector1[i]+vector2[i];
        std::cout<<vector3[i]<<std::endl;
    }
    return 0;
}
