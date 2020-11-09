#include <iostream>

#include "coord3D.h"
#include "3d-space.h"

int main(){
	Coord3D pointP = {10,20,30};
	std::cout << length(&pointP) << "\n";

	Coord3D pointQ = {-20,21,-22};
	std::cout << "Address of P: " << &pointP << "\n";
	std::cout << "Address of Q: " << &pointQ << "\n\n";
	Coord3D * ans = fartherFromOrigin(&pointP,&pointQ);
	std::cout << "ans = " << ans << "\n";

	Coord3D pos = {0,0, 100.0};
	Coord3D vel = {1, -5, 0.2};
	move(&pos, &vel, 2.0);
	std::cout << pos.x << " " << pos.y << " " << pos.z << "\n";

	double x,y,z;
	std::cout << "Enter Position: ";
	std::cin >> x >> y >> z;
	Coord3D *ppos = createCoord3D(x,y,z);
	std::cout << "Enter velocity: ";
    std::cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    std::cout << "Coordinates after 10 seconds: "<< (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << "\n";

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
    return 0;
}
