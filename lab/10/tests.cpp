#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"

TEST_CASE("Minutes since Midnight"){
	CHECK(minutesSinceMidnight({0,0})==0);
	CHECK(minutesSinceMidnight({1,0})==60);
	CHECK(minutesSinceMidnight({0,75})==75);
	CHECK(minutesSinceMidnight({0,-10})==1430);
	CHECK(minutesSinceMidnight({25,0})==60);
	CHECK(minutesSinceMidnight({99,99})==(99*60+99)%(24*60));	
}

TEST_CASE("minutes until"){
	CHECK(minutesUntil({0,0},{0,0})==0);
	CHECK(minutesUntil({0,0},{1,30})==90);
	CHECK(minutesUntil({1,30},{0,0})==-90);
}

TEST_CASE("addMinutes"){
	CHECK(minutesSinceMidnight(addMinutes({0,0},60))==minutesSinceMidnight({0,60}));
	CHECK(minutesSinceMidnight(addMinutes({0,0},60*24))==minutesSinceMidnight({0,0}));
	CHECK(minutesSinceMidnight(addMinutes({16,39},75))==minutesSinceMidnight({17,54}));
}

TEST_CASE("Time Slot"){
	CHECK(getTimeSlot({{"Back to the Future",COMEDY,116},{9,15}}) == "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
	CHECK(getTimeSlot({{"Black Panther",ACTION,134},{12,15}}) == "Black Panther ACTION (134 min) [starts at 12:15, ends by 14:29]");
	CHECK(getTimeSlot({{"Movie3", DRAMA, 290},{6,04}}) == "Movie3 DRAMA (290 min) [starts at 6:04, ends by 10:54]");
}

TEST_CASE("Schedule After"){
	CHECK(getTimeSlot(scheduleAfter({{"Movie1",ACTION,60},{0,0}},{"Movie2",COMEDY,60})) == getTimeSlot({{"Movie2",COMEDY,60},{1,0}}));
	CHECK(getTimeSlot(scheduleAfter({{"Movie3",DRAMA,90},{6,20}},{"Movie4",ROMANCE,200})) == getTimeSlot({{"Movie4",ROMANCE,200},{7,50}}));
}

TEST_CASE("Overlap"){
	TimeSlot ts1 = {{"Movie1",ACTION,60},{0,0}};
	TimeSlot ts2 = {{"Movie2",ACTION,60},{1,0}};
	TimeSlot ts3 = {{"Movie3",ACTION,60},{0,59}};
	CHECK(timeOverlap(ts1,ts2) == false);
	CHECK(timeOverlap(ts1,ts3) == true);
}