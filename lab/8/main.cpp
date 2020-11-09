#include <cstdlib>
#include <string>

#include "imageio.h"
#include "funcs.h"

int main(){
	std::string input = "image2.pgm";
	int h,w;
	int img[MAX_H][MAX_W];
	//Task A
	readImage(input, img, h, w);
	invert(img,h,w);
	writeImage("taskA.pgm",img,h,w);

	//Task B
	img[MAX_H][MAX_W];
	readImage(input, img,h,w);
	invertHalf(img,h,w);
	writeImage("taskB.pgm",img,h,w);

	//Task C
	img[MAX_H][MAX_W];
	readImage(input, img,h,w);
	box(img,h,w);
	writeImage("taskC.pgm",img,h,w);

	//Task D
	img[MAX_H][MAX_W];
	readImage(input, img,h,w);
	frame(img,h,w);
	writeImage("taskD.pgm",img,h,w);

	//Task F
	img[MAX_H][MAX_W];
	readImage(input, img,h,w);
	pixelate(img,h,w);
	writeImage("taskF.pgm",img,h,w);

	// TASK E
	img[MAX_H][MAX_W];
	readImage(input,img,h,w);
	scale(img,h,w);	

	return 0;
}
