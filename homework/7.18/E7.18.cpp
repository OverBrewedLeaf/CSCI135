/*
Author: Jeffrey Li
Prof Tong Yi

Defines a triangle and give the perimeter.
*/
#include <iostream>
#include <cmath>

struct Point{
	double x;
	double y;
};

struct Triangle{
	Point a;
	Point b;
	Point c;
};

double distance(Point a, Point b){
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

double perimeter(Triangle tri){
	return distance(tri.a,tri.b) + distance(tri.a,tri.c) + distance(tri.b, tri.c);
}

int main(){
	double ax,ay,bx,by,cx,cy;
	std::cin >> ax >> ay >> bx >> by >> cx >> cy;
	std::cout << perimeter({{ax,ay},{bx,by},{cx,cy}}) << "\n";
}
