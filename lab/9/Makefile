main: main.o 3d-space.o
	g++ -o main main.o 3d-space.o 

tests: tests.o 3d-space.o
	g++ -o tests tests.o 3d-space.o 

main.o: main.cpp

tests.o: tests.cpp

3d-space.o: 3d-space.cpp 3d-space.h coord3D.h

open:
	subl Makefile main.cpp 3d-space.cpp 3d-space.h

clean:
	rm -f main main.o tests tests.o 3d-space.o poem

add:
	git add Makefile main.cpp tests.cpp 3d-space.cpp 3d-space.h coord3D.h poem.cpp