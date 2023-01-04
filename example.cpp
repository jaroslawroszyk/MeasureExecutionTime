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
    time.start();

    long_operation();

    time.end();
    time.getTimeInMsAsDouble();
    time.getTimeInMsAsInt();

    return 0;
}