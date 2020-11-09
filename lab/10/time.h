#pragma once
#include <string>
class Time { 
public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time,int);
std::string printTime(Time);