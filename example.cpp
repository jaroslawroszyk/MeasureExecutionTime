#include "MeasureTime.hpp"

void long_operation()
{
    /* Simulating heavy operation */
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(51ms);
}

int main()
{
    MeasureTime time;
    time.startTimer();

    long_operation();
    
    time.endTimer();
    time.getTimeInMsAsDouble();
    time.getTimeInMsAsInt();

    return 0;
}