#include <cstdlib>
#include <cstdio>

#include <memory>

#include "engine/Engine.hpp"
#include "graphics/Graphics.hpp"
#include "input/Input.hpp"
#include "sound/Sound.hpp"
#include "physics/Physics.hpp"
#include "scene/Scene.hpp"

#include "graphics/GraphicsSDL.hpp"
#include "input/InputSDL.hpp"
#include "sound/SoundSDL.hpp"
//#include "physics/PhysicsPhysX.hpp"

int AppMain(const char *asName, int argc, char **argv)
{
	printf("I Need Speed!\n");
	
	auto pGraphicsImpl{std::make_unique<cGraphicsSDL>()};
	auto pGraphics{std::make_unique<cGraphics>(pGraphicsImpl.get())};
	
	auto pInputImpl{std::make_unique<cInputSDL>()};
	auto pInput{std::make_unique<cInput>(pInputImpl.get())};
	
	auto pSoundImpl{std::make_unique<cSoundSDL>()};
	auto pSound{std::make_unique<cSound>(pSoundImpl.get())};
	
	//auto pPhysicsImpl{std::make_unique<cPhysicsPhysX>()};
	//auto pPhysics{std::make_unique<cPhysicsPhysX>(pPhysicsImpl.get())};
	
	auto pScene{std::make_unique<cScene>()};
	
	auto pEngine{std::make_unique<cEngine>(argc, argv, pGraphics.get(), pInput.get(), pSound.get(), pScene.get())};
	
	pEngine->Init();
	
	getchar();
	
	return EXIT_SUCCESS;
};

int main(int argc, char **argv)
{
	return AppMain("LimitedSlip", argc, argv);
};