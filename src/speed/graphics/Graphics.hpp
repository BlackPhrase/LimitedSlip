#pragma once

using SDL_Window = struct SDL_Window;

struct iGraphicsImpl;

class cGraphics
{
public:
	cGraphics(iGraphicsImpl *apImpl);
	~cGraphics();
	
	void Init(const wchar_t *asWindowTitle, int anWindowWidth, int anWindowHeight, bool abFullScreen);
private:
	iGraphicsImpl *mpImpl{nullptr};
	
	SDL_Window *mpWindow{nullptr};
};