#include <stdexcept>

#include "Graphics.hpp"

cGraphics::~cGraphics()
{
	if(TTF_WasInit())
		TTF_Quit();
	
	SDL_DestroyWindow(mpWindow);
};

void cGraphics::Init()
{
	if(!TTF_Init())
	{
		//std::cout << "SDL2_ttf initialization failed! (" << TTF_GetError() << ")" << std::endl;
		throw std::runtime_error("SDL2_ttf initialization failed!");
		//TTF_Quit();
	};
	
	int nWindowWidth{1280};
	int nWindowHeight{600};
	bool bWindowFullScreen{false};
	
	int nWindowFlags{SDL_WINDOW_SHOWN};
	
	if(bWindowFullScreen)
		nWindowFlags |= SDL_WINDOW_FULLSCREEN;
	
	mpWindow = SDL_CreateWindow("LimitedSlip", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, nWindowWidth, nWindowHeight, nWindowFlags);
	
	if(!mpWindow)
	{
		//std::cout << "SDL2 window creation failed! (" >> SDL_GetError() << ")" << std::endl;
		throw std::runtime_error("SDL2 window creation failed!");
		SDL_Quit();
	};
	
	// TODO: renderer initialization
};