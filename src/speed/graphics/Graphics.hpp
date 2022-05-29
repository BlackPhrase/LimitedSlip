#pragma once

using SDL_Window = struct SDL_Window;

class cGraphics
{
public:
	~cGraphics();
	
	void Init();
private:
	SDL_Window *mpWindow{nullptr};
};