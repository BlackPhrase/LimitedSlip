#include "Physics.hpp"
#include "PhysicsImpl.hpp"

cPhysics::cPhysics(iPhysicsImpl *apImpl) : mpImpl(apImpl){}

iPhysicsWorld *cPhysics::CreateWorld()
{
	return mvWorlds.emplace_back(mpImpl->CreateWorld());
};

void cPhysics::DestroyWorld(iPhysicsWorld *apWorld)
{
	//delete apWorld;
};