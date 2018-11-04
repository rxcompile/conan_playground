#include "nontrivial.h"

Factory::Factory()
    : field(std::make_unique<std::array<int, 5000>>())
{
}
Factory::~Factory()
{
}