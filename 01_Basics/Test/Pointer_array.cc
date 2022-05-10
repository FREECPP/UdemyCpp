#include <iostream>

void func_array(int* p, unsigned int size_of_array)
{
    //initialize Array
    for(unsigned int i= 0; i<size_of_array; i++)
    {
        p[i]=i;
    }

    //print array values
    for(unsigned int i = 0; i <size_of_array; i++)
    {
        std::cout<<p[i]<<std::endl;

    }


}

int main ()
{
    unsigned int array_size = 10;

    int* pointer = new int [array_size];

    func_array(pointer, array_size);

    int array[]={1,2,3,4,5};
    std::cout<<array[2]<<std::endl;
    return 0;

}
