#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <string_view>

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
  
    void getTimeInMsAsInt(const std::string_view &view)
    {
        auto ms_int = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
        std::cout << view << " : " << ms_int.count() << "ms\n";
    }

    void getTimeInMsAsDouble()
    {
        std::chrono::duration<double, std::milli> ms_double = t2 - t1;
        std::cout << ms_double.count() << "ms\n";
    }

    void getTimeInMsAsDouble(const std::string_view &view)
    {
        std::chrono::duration<double, std::milli> ms_double = t2 - t1;
        std::cout << view << " : " << ms_double.count() << "ms\n";
    }

private:
    std::chrono::time_point<std::chrono::steady_clock> t1;
    std::chrono::time_point<std::chrono::steady_clock> t2;
};
