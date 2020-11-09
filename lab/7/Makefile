
main:main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

main.o: main.cpp

unindent.o: unindent.cpp

indent.o: indent.cpp

run_main: main
	make main
	./main
	make clean

add:
	git add Makefile main.cpp README.org doctest.h indent.cpp indent.h unindent.cpp unindent.h bad-code.cpp

clean:
	rm -f main.o main indent.o unindent.o
