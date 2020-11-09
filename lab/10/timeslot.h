#pragma once
#include "movie.h"
#include "time.h"
class TimeSlot{
	public:
		Movie movie;
		Time startTime;
};
std::string getTimeSlot(TimeSlot);
TimeSlot scheduleAfter(TimeSlot, Movie);
bool timeOverlap(TimeSlot, TimeSlot);