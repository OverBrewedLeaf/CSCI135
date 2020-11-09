/*
Author: Jeffrey Li
Prof Tong Yi

Defines the struct point and finds distance from two points
*/
#include <iostream>
#include <cmath>
struct Point{
	double x;
	double y;
};

double distance(Point a, Point b){
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main(){
	double ax,ay,bx,by;
	std::cin >> ax >> ay >> bx >> by;
	std::cout << distance({ax,ay},{bx,by})<< "\n";

}
