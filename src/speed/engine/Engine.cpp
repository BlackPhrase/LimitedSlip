#include "Engine.hpp"

#include "graphics/Graphics.hpp"
#include "input/Input.hpp"
#include "sound/Sound.hpp"

cEngine::cEngine(int argc, char **argv, cGraphics *apGraphics, cInput *apInput, cSound *apSound)
	: mnArgCount(argc), msArgValue(argv), mpGraphics(apGraphics), mpInput(apInput), mpSound(apSound){}

void cEngine::Init()
{
	int nWindowWidth{1280};
	int nWindowHeight{600};
	bool bWindowFullScreen{false};
	
	mpGraphics->Init("LimitedSlip", nWindowWidth, nWindowHeight, bWindowFullScreen);
	mpInput->Init();
	mpSound->Init();
};