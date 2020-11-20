#include <cmath>

#include "coord3D.h"
#include "3d-space.h"

double length(Coord3D *p){
	return sqrt(pow(p->x,2)+pow(p->y,2)+pow(p->z,2));
}

Coord3D * fartherFromOrigin(Coord3D *p1,Coord3D *p2){
	if(length(p2)<length(p1)) return p2;
	else return p1;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
	ppos->x += pvel-> x * dt;
	ppos->y += pvel-> y * dt;
	ppos->z += pvel-> z * dt;
}

void deleteCoord3D(Coord3D *p){
	delete p;
}

Coord3D* createCoord3D(double x, double y, double z){
	Coord3D *ans = new Coord3D;
	ans->x = x;
	ans->y = y;
	ans->z = z;
	return ans;
}

