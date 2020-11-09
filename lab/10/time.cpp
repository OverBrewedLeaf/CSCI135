#include "time.h"
#include <string>
int minutesSinceMidnight(Time time){
	return ((time.h*60+time.m)%(24*60)+(24*60))%(24*60);
}

int minutesUntil(Time earlier, Time later){
	return minutesSinceMidnight(later)-minutesSinceMidnight(earlier);
}

Time addMinutes(Time time0,int min){
	return {(minutesSinceMidnight(time0) + min)/60,(minutesSinceMidnight(time0) + min)%60};
}
std::string printTime(Time time){
	if(time.m < 10){
		return std::to_string(time.h) + ":0" + std::to_string(time.m);
	}
	else return std::to_string(time.h) + ":" + std::to_string(time.m);
}