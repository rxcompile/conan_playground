
#include "lib1.h"
#include "lib2.h"
#include "lib3.h"

#include "raii_signal.h"

#include <iostream>
#include <memory>

int main()
{
    auto guard = std::make_unique<RAIISignal>();
    guard->connect([]() { std::cout << "A " << lib1() << std::endl; });
    guard->connect([]() { std::cout << "B " << lib2() << std::endl; });
    guard->connect([]() { std::cout << "C " << lib3() << std::endl; });
    guard->connect([]() { std::cout << lib1() + lib2() + lib3() << std::endl; });
    return 0;
}