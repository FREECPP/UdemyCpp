#include <iostream>

int main()
{
    int* pointer = new int{4};
    std::cout<<"Heap adress:"<<pointer<<std::endl;
    std::cout<<"Pointer adress:"<<&pointer<<std::endl;
    std::cout<<"Heap value:"<<*pointer<<std::endl;
    delete pointer;
    return 0;
}


