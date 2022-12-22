#pragma once
#include <chrono>
#include <iostream>
#include <thread>

// using std::chrono::duration;
// using std::chrono::duration_cast;
// using std::chrono::high_resolution_clock;
// using std::chrono::milliseconds;

class MeasureTime
{
public:
    auto startTimer() { t1 = std::chrono::high_resolution_clock::now(); }
    auto endTimer() { t2 = std::chrono::high_resolution_clock::now(); }
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
    std::chrono::time_point<std::chrono::system_clock> t1;
    std::chrono::time_point<std::chrono::system_clock> t2;
};
