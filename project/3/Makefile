main: main.cpp funcs.o
	g++ -o main main.cpp tortoise.cpp tortoise.h competition.cpp competition.h hare.cpp hare.h road.cpp road.h

funcs.o: tortoise.cpp tortoise.h competition.cpp competition.h hare.cpp hare.h road.cpp road.h

clean:
	rm -f main main.o funcs.o