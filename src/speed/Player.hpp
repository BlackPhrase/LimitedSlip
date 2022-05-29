#pragma once

#include <vector>

class cCar;
using tCarVec = std::vector<cCar*>;

class cPlayer
{
public:
	cCar *GetActiveCar() const;
	tCarVec GetCars() const;
private:
	tCarVec mvCars;
	
	int mnActiveCar{-1};
};