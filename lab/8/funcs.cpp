#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

#include "funcs.h"
#include "imageio.h"
using namespace std;

int avg(int a,int b,int c,int d){return (a+b+c+d)/4;}
int invrs(int a){return 255-a;}

//TASK A
void invert(int img[MAX_H][MAX_W],int h, int w){
  for(int y = 0; y < h; y++){
    for(int x = 0; x < w; x++){
      img[y][x] = invrs(img[y][x]);
    }
  }
}

//TASK B
void invertHalf(int img[MAX_H][MAX_W],int h, int w){
  for(int y = 0; y < h; y++){
    for(int x = w/2; x < w; x++){
      img[y][x] = invrs(img[y][x]);
    }
  }
}

//TASK C
void box(int img[MAX_H][MAX_W],int h, int w){
  for(int y = h/4; y < h*3/4; y++){
    for(int x = w/4; x < w*3/4; x++){
      img[y][x] = 255;
    }
  }
}

//TASK D
void frame(int img[MAX_H][MAX_W],int h, int w){
  for(int y = h/4; y < h*3/4; y++){
    for(int x = w/4; x < w*3/4; x++){
      if(x == w/4 || x == w*3/4-1 || y == h/4 || y == h*3/4-1)
        img[y][x] = 255;
    }
  }
}

//Task F
void pixelate(int img[MAX_H][MAX_W],int h, int w){
  for(int y = 0; y < h; y+=2){
    for(int x = 0; x < w; x+=2){
      int temp = avg(img[x][y],img[x+1][y],img[x][y+1],img[x+1][y+1]);
      img[x][y] = temp;
      img[x+1][y] = temp;
      img[x][y+1] = temp;
      img[x+1][y+1] = temp;
    }
  }
}

void writeImage2(std::string filename, int image[1024][1024], int height, int width) {
	ofstream ostr;
	ostr.open(filename);
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}
//TASK E
void scale(int img[MAX_H][MAX_W],int h, int w){
	int scaled[MAX_W*2][MAX_H*2];
  	for(int y = 0; y < h*2; y+=2){
    	for(int x = 0; x < w*2; x+=2){
      		int temp = img[y/2][x/2];
      		scaled[y][x]= temp;
      		scaled[y+1][x] = temp;
      		scaled[y][x+1] = temp;
      		scaled[y+1][x+1] = temp;
    	}
  	}
  	writeImage2("taskE.pgm",scaled,h*2,w*2);
}