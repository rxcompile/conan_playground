#pragma once

#include <memory>
#include <array>

class Factory
{
    std::unique_ptr<std::array<int, 5000>> field;

  public:
    Factory();
    ~Factory();
};