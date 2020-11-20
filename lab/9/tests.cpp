#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <cmath>

#include "doctest.h"
#include "coord3D.h"
#include "3d-space.h"

TEST_CASE("Task A"){
	Coord3D point1 = {10,20,30};
	Coord3D point2 = {100,500,750};
	Coord3D point3 = {0,0,0};
	CHECK(length(&point1) == sqrt(1400));
	CHECK(length(&point2) == sqrt(822500));
	CHECK(length(&point3) == 0);
}

TEST_CASE("Task B"){
	Coord3D point1 = {10,20,30};
	Coord3D point2 = {100,500,750};
	Coord3D point3 = {0,0,0};
	CHECK(fartherFromOrigin(&point1, &point2) == &point1);
	CHECK(fartherFromOrigin(&point1, &point3) == &point3);
	CHECK(fartherFromOrigin(&point2, &point3) == &point3);
}

TEST_CASE("Task C"){
	Coord3D point1 = {10,20,30};
	Coord3D point3 = {0,0,0};
	move(&point3,&point1,10);
	CHECK(point3.x == 100);
	CHECK(point3.y == 200);
	CHECK(point3.z == 300);
}

TEST_CASE("Task E"){
	Coord3D *point = createCoord3D(1,2,3);
	CHECK(point->x == 1);
	CHECK(point->y == 2);
	CHECK(point->z == 3);
}