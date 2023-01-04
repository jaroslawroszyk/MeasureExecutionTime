#pragma once
#include <iostream>
#include <chrono>
#include <thread>

class MeasureTime
{
public:
    void start() { t1 = std::chrono::steady_clock::now(); }

    void end() { t2 = std::chrono::steady_clock::now(); }

    void getTimeInMsAsInt()
    {
        auto ms_int = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
        std::cout << ms_int.count() << "ms\n";
    }

    void getTimeInMsAsDouble()
    {
        std::chrono::duration<double, std::milli> ms_double = t2 - t1;
        std::cout << ms_double.count() << "ms\n";
    }

private:
    std::chrono::time_point<std::chrono::steady_clock> t1;
    std::chrono::time_point<std::chrono::steady_clock> t2;
};
