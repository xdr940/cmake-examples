#include <iostream>

#include "shared/Hello.h"

void Hello::print()
{
    std::cout << "Hello Shared Library!" << std::endl;
}

void Hello::print2()
{
    std::cout << "Hello2 Shared Library!" << std::endl;
}

