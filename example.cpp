#include "MeasureTime.hpp"

void long_operation()
{
    /* Simulating heavy operation */
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(52ms);
}

int main()
{
    MeasureTime time;
    MeasureTime timer2;
    time.start();
    timer2.start();
    long_operation();
    timer2.end();
    timer2.getTimeInMsAsDouble("timer2");
    time.end();
    time.getTimeInMsAsDouble();
    time.getTimeInMsAsInt();

    return 0;
}