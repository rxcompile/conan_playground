#pragma once

#include <boost/signals2/signal.hpp>

class RAIISignal
{
  public:
    using FireSignal = boost::signals2::signal<void()>;
    
    RAIISignal();
    ~RAIISignal();

    void connect(FireSignal::slot_type slot);

  private:
    FireSignal sig;
};