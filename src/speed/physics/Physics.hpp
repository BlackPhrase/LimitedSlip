#pragma once

#include <vector>

struct iPhysicsImpl;

struct iPhysicsWorld;
using tPhysicsWorldVec = std::vector<iPhysicsWorld*>;

class cPhysics
{
public:
	cPhysics(iPhysicsImpl *apImpl);
	
	iPhysicsWorld *CreateWorld();
	void DestroyWorld(iPhysicsWorld *apWorld);
private:
	tPhysicsWorldVec mvWorlds;
	
	iPhysicsImpl *mpImpl{nullptr};
};