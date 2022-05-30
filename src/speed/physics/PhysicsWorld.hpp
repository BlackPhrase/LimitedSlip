#pragma once

struct iRigidBody;

struct iPhysicsWorld
{
	///
	virtual iRigidBody *CreateBody() = 0;
	
	///
	virtual void DestroyBody(iRigidBody *apBody) = 0;
};