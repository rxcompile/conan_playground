
#include "lib1.h"
#include "lib2.h"
#include "lib3.h"

#include <iostream>

int main()
{
    std::cout << lib1()+lib2()+lib3() << std::endl;
    return 0;
}