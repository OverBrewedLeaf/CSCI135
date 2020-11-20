#include "timeslot.h"
#include <string>
std::string getTimeSlot(TimeSlot ts){
	std::string g;
    switch (ts.movie.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
	return ts.movie.title + " " + g + " (" + std::to_string(ts.movie.duration) + " min) [starts at " + printTime(ts.startTime) + ", ends by " + printTime(addMinutes(ts.startTime,ts.movie.duration)) + "]";
}
TimeSlot scheduleAfter(TimeSlot ts, Movie mv){
	return {mv,addMinutes(ts.startTime,ts.movie.duration)};
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
	return minutesSinceMidnight(ts1.startTime)+ts1.movie.duration > minutesSinceMidnight(ts2.startTime);
}