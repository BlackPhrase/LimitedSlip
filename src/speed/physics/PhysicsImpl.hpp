#pragma once

struct iPhysicsWorld;

struct iPhysicsImpl
{
	///
	virtual iPhysicsWorld *CreateWorld() = 0;
};