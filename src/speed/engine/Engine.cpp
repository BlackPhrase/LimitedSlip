#include "Engine.hpp"

#include "graphics/Graphics.hpp"
#include "input/Input.hpp"
#include "sound/Sound.hpp"

void cEngine::Init()
{
	mpGraphics = std::make_unique<cGraphics>();
	mpInput = std::make_unique<cInput>();
	mpSound = std::make_unique<cSound>();
	
	mpGraphics->Init();
	mpInput->Init();
	mpSound->Init();
};