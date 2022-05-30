#pragma once

#include "GraphicsImpl.hpp"

class cGraphicsSDL : public iGraphicsImpl
{
public:
	void Init(const wchar_t *asWindowTitle, int anWindowWidth, int anWindowHeight, bool abFullScreen) override;
private:
};