#include <stdexcept>

#include "Graphics.hpp"
#include "GraphicsImpl.hpp"

cGraphics::cGraphics(iGraphicsImpl *apImpl) : mpImpl(apImpl){}

cGraphics::~cGraphics()
{
	if(TTF_WasInit())
		TTF_Quit();
	
	SDL_DestroyWindow(mpWindow);
};

void cGraphics::Init(const wchar_t *asWindowTitle, int anWindowWidth, int anWindowHeight, bool abFullScreen)
{
	mpImpl->Init(asWindowTitle, anWindowWidth, anWindowHeight, abFullScreen);
	
	if(!TTF_Init())
	{
		//std::cout << "SDL2_ttf initialization failed! (" << TTF_GetError() << ")" << std::endl;
		throw std::runtime_error("SDL2_ttf initialization failed!");
		//TTF_Quit();
	};
	
	int nWindowFlags{SDL_WINDOW_SHOWN};
	
	if(abFullScreen)
		nWindowFlags |= SDL_WINDOW_FULLSCREEN;
	
	mpWindow = SDL_CreateWindow("LimitedSlip", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, anWindowWidth, anWindowHeight, nWindowFlags);
	
	if(!mpWindow)
	{
		//std::cout << "SDL2 window creation failed! (" >> SDL_GetError() << ")" << std::endl;
		throw std::runtime_error("SDL2 window creation failed!");
		SDL_Quit();
	};
	
	// TODO: renderer initialization
};