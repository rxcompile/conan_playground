#include "lib1.h"

#include <variant>
#include <functional>

int lib1()
{
    constexpr const std::variant<int, float, double> v = 2.0;
    constexpr auto visitor = Visitor {
        [](float a) -> int { return a + 3.4f; },
        [](int a) -> int { return a + 3; },
        [](double a) -> int {return int(a) - 1; }
    };
    return std::visit(visitor, v);
}