main: main.o funcs.o imageio.o
	g++ -o main main.o funcs.o imageio.o

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

imageio.o: imageio.cpp imageio.h

main.o: main.cpp

funcs.o: funcs.cpp funcs.h

clean:
	rm -f sample.o sample imageio.o main.o main funcs.o outImage.pgm scale.o taskA.pgm taskB.pgm taskC.pgm taskD.pgm taskE.pgm taskF.pgm

add:
	git add Makefile main.cpp funcs.cpp funcs.h scale.cpp scale.h imageio.cpp imageio.h

open:
	subl Makefile main.cpp funcs.cpp funcs.h scale.cpp scale.h

run: main
	make clean
	make main
	./main
	eog taskA.pgm taskB.pgm taskC.pgm taskD.pgm taskE.pgm taskF.pgm
