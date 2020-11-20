
main: main.o time.o timeslot.o
	g++ -o main main.cpp time.cpp time.h timeslot.cpp timeslot.h movie.h

tests: tests.o time.o timeslot.o movie.h
	g++ -o tests tests.cpp time.cpp time.h timeslot.cpp timeslot.h movie.h

main.o: main.cpp

tests.o: tests.cpp

time.o: time.cpp time.h

timeslot.o: timeslot.cpp timeslot.h movie.h

clean:
	rm -f main tests main.o tests.o time.o timeslot.o

add:
	git add Makefile main.cpp tests.cpp time.cpp time.h movie.h timeslot.cpp timeslot.h

open:
	subl main.cpp