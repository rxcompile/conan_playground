#include "raii_signal.h"

#include <iostream>

RAIISignal::RAIISignal()
{
}

RAIISignal::~RAIISignal()
{
    sig();
}

void RAIISignal::connect(FireSignal::slot_type slot)
{
    sig.connect(slot);
}